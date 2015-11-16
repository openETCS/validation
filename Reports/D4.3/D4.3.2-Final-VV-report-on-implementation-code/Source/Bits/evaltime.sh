#!/bin/bash

# research how many goals are proved for a given timeout
# execute this in the directory dataDictionary/Source/Bitwalker
# generates lines of the form
# timeout,proved_goals,total_goals,total_time

makeproofcount() {
	i=$1
	shift
	make $@ |
	tee /tmp/all-$i.txt |
	grep "Proved goals" |
	sed -e 's/^.*goals: *//' -e 's: / :,:'
}

for i in `seq 1 60`
do
	SECONDS=0
	proved=`makeproofcount $i WP_TIMEOUT=$i WP_COQ_TIMEOUT=$i WP_ALT_ERGO_STEPS=1000000 all.wp`
	printf %d,%s,%d\\n $i $proved $SECONDS
done
