#!/bin/bash

# run solvers with exponentially rising timeout on a given set of
# why-files to speed up the verification process by avoiding long
# timeouts.

usage() {
	echo Usage: $0 [ -t maxtimeout ] [ -p prover_order ] [ -v ] files...
	echo Option -v causes $0 to display valid theories, too.
	exit 1
}

# verify a single theory. Output:
# * if succesful to fd 3,
# * if timeout or unknown to fd 2
# * else to fd 1
single_theory() {
	local output=$(why3 prove $1 -L "$(dirname $1)" -L $FRAMAC_SHARE/wp/why3/ -T $2 --prover $3 -t $4 2>/dev/null)

	case "$output" in
	*Valid*)
		# ignore when nothing has been proven
		echo "VALID  " $2 from $1 "($output)" >&3 ;;

	*Timeout*|*Unknown*)
		echo $1,$2 >&2 ;;
	'')
		;;
	*)
		echo "FAILED "  $2 from $1 "($output)"  ;;
	esac
}

do_theories() {
	while IFS=',' read file theory
	do
		single_theory $file $theory $1 $2 $3
	done
}

enumerate_theories() {
	for file in "$@"
	do
		for theory in `sed -n 's/^.*theory \(.*\)$/\1/p' $file`
		do
			echo $file,$theory
		done
	done
}

theory_count() {
	wc -l <$1
}

goal_count() {
	# cat `sed 's/,[^,]*$//' $1 | sort -u` | grep -c goal


	(
		declare -i count=0

		while IFS=, read file theory
		do
			count+=`sed -n "/theory $theory\$/,/theory/p" $file | grep -c ^goal`
		done

		echo $count
	) <$1
}

single_pass() {
	local timeout=$1
	local theories=/dev/fd/0

	for prover in $provers
	do
		thcount=`theory_count $theories`
		[ "$thcount" = 0 ] && break

		printf "Verifying %s goals in %s theories with %s, timeout is %s... " `goal_count $theories` $thcount $prover $timeout >&2
		local remaining=`mktemp "${TEMPDIR:-/tmp}/remaining.XXXXXXX"`

		if [ "$prover" = "${provers/* }" ]
		then
			islastprover=true
		else
			islastprover=false
		fi

		time do_theories $prover $timeout $islastprover <$theories 2>$remaining 3>$validsto

		[ "$theories" != /dev/fd/0 ] && rm -f $theories
		theories=$remaining
	done

	cat $theories >&3
	rm -f $theories
}

show_timeouts() {
	while IFS=, read file theory
	do
		echo TIMEOUT $theory from $file
	done
}

maxtimeout=32
provers="CVC4 Z3 Alt-Ergo"
validsto=/dev/null

while getopts "t:p:v" option
do
	case "$option" in
	t)
		maxtimeout=$OPTARG ;;
	p)
		provers=$(tr ',' ' ' <<<"$OPTARG") ;;
	v)
		validsto=/dev/fd/1 ;;
	*)
		usage ;;
	esac
done

shift $((OPTIND-1))

[ -z "$*" ] && usage

TIMEFORMAT=' (%Rs)'
theories=`mktemp "${TEMPDIR:-/tmp}/theories.XXXXXX"`
enumerate_theories "$@" >$theories
echo Found `goal_count $theories` goals in `theory_count $theories` theories >&2

timeout=1
while [ $timeout -le $maxtimeout ]
do
	echo Using a timeout of $timeout seconds >&2
	remaining=`mktemp remaining.XXXXXX`
	single_pass $timeout <$theories 3>$remaining

	rm -f $theories
	theories=$remaining
	[ 0 = `theory_count $theories` ] && break
	timeout=$((timeout*2))
done

thcount=`theory_count $theories`
if [ "$thcount" != 0 ]
then
	echo `goal_count $theories` goals in $thcount theories could not be verified with this timeout >&2
	show_timeouts <$theories
fi

rm $theories
