#!/bin/bash

# invoke as bash statistik.sh all-20.txt

infile=$1
timeout=20s

# convert a time provided either in seconds or in milliseconds into a
# time in milliseconds
toms() {
	case $1 in
	*ms)
		echo ${1%ms} ;;
	*s)
		bc <<< "${1%s}*1000" | sed 's/\.[0-9]*$//' ;;
	"")
		# catch a variable left empty
		echo 0 ;;
	esac
}

parse_goals() {
	# read in a line of the form
	# wp Alt-Ergo Goal typed_ref_BitTest_Bitstream_Init_post_invariant : Valid Qed:3ms 579ms 433
	while read wp prover goal goalname colon validity time1 time2 time3
	do
		#echo $prover+$goalname+$validity+$time1+$time2+$time3
		parse_goal
	done
}

parse_goal() {
	Qedtime=0
	AltErgotime=0
	cvc4time=0
	z3time=0
	Coqtime=0

	if [[ $time1 = Qed* ]]
	then
		qedtime=${time1#Qed:}
		time=$time2
	else
		time=$time1
	fi

	# don't count Qed time multiple times on verification failute
	[ $validity != Valid ] && qedtime=0s
	[ $validity = Timeout ] && time=$timeout

	time=`toms $time`
	qedtime=`toms $qedtime`

	declare ${prover}time=$time

	echo $prover,$validity,$Qedtime,$AltErgotime,$cvc4time,$z3time,$Coqtime
}

grep Goal $1 | sed \
	-e 's/[][()]//g' \
	-e 's/Step limit/Steplimit/' \
	-e 's/Alt-Ergo/AltErgo/' \
	-e 's/Default tactic/DefaultTactic/' \
	-e 's/Saved script/SavedScript/' \
	| parse_goals
