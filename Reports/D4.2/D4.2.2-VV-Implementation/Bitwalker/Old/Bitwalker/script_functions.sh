#/bin/bash
 
#function equal: compares two stings and returns "0" if the strings are equal otherwise 0.

function equal () 
{
    case "$1" in "$2")
        return 0;;
    esac
    return 1
}

#function print: expects the statistic values which calculated by jessie and wp and prints them on bash;
    # 1. arg: name of the algorithm
    # 2. arg: number of valid proofs
    # 3. arg: number of non valid proofs 
    # 4. arg: used prover                       
function print ()
{ 
  valid=${2##*/}
  nonvalid=${3##*/}

    if [ -z "$valid" ]
        then
	 valid=0
    fi  

    if [ -z "$nonvalid" ]
        then
	 nonvalid=0 
    fi      

    
    let "total=$valid +$nonvalid"
    if [ $total -ne 0 ]
        then let "percent=(100*$valid)/$total"
        else    percent=0
    fi
    printf  "verify  %-25s ( %-3d of %-3d )     %-3d %% %-15s" ${1##*/} $valid $total $percent ${4##*/}

    #cleanup variables
    unset valid
    unset nonvalid
    unset total
    unset percent
}

#function generateFile: creates an empty temporary file
function generateTempFile()
{
    #create an empty temporary file
    #deny access to temp file
    umask  007
    local temp=`mktemp ${TMPDIR-/tmp}/tempResults.XXXXXXXXXXXXXXXX` || exit 1
    eval $1=$temp;

}


#function startWP expects the parameters flags. prover and wp-flags; the fuction prints the number of valid proofs in #1 and the number of non valid proofs in #2 seperated by /t to stdout
#support function nedded by startWP and startJessie
function checkParameter()
{  
    if [ -z "$1" ]
        then
            echo "missing argument 1: script expects an algorithm name; script will exit"
            exit 1
    fi
    

    if [ -z "$2" ]
        then prover='alt-ergo'
        echo "missing argument 2: prover changed to ${prover}"
    fi
}

function checkAlg()
{  
    if [ -z "$1" ]
        then
            echo "missing argument 1: script expects an algorithm name; script will exit"
            exit 1
    fi
}


function checkProver()
{  
    if [ -z "$1" ]
        then prover='alt-ergo'
        echo "missing argument 2: prover changed to ${prover}"
    fi
}



#needs a variable as argument
function changeEditor()
{
local temp= "error"
if [ "$(uname)" == Darwin ]
    then
    #  Mac OS X platform
     temp="gsed"
elif [ "$(uname)" == Linux ]
then
     temp="sed"
else 
    echo"an error has been detected"
fi

#echo " prgEE: ${temp}"
eval $1=$temp;
}


#function startWP:
# arg1: name of the algorithm
function extract_raw_data_Wp()
{
    local alg=${1##*/}
   # local prover=${2##*/}
    checkAlg $alg
    local tempFile
    local tempFile2
    local goalCount=0
    local prg_sed
    changeEditor prg_sed
    local invalid=0
    local valid=0
    local lemma=0

    local peek=0
    local poke=0
    local peek_valid=0
    local poke_valid=0


    local peek_rte=0
    local poke_rte=0
    local peek_rte_valid=0
    local poke_rte_valid=0

    local incremental_peek_next=0
    local incremental_poke_next=0
    local incremental_peek_finish=0
    local incremental_poke_finish=0
    local incremental_init=0

    local percent_peek=0
    local percent_poke=0
    local percent_rte_peek=0
    local percent_rte_poke=0
    local percent_func_peek=0
    local percent_func_poke=0
    local func_peek=0
    local func_poke=0
    local func_peek_valid=0
    local func_poke_valid=0




    #generate temporary files
    generateTempFile tempFile
    generateTempFile tempFile2

    pattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*[[:blank:]]+Valid'
    goalPattern='^\[wp\][[:blank:]]+[[:digit:]]+[[:blank:]]+goals[[:blank:]]+scheduled'

    peekPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Peek'
    pokePattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Poke'
    incrementalInitPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Init'
    incrementalPeekFinishPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Peek\_Finish'
    incrementalPokeFinishPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Poke\_Finish'
    incrementalPeekNextPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Peek_\Next'
    incrementalPokeNextPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Poke_\Next'
    lemmaPattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_lemma'


    peekRtePattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Peek\_assert\_rte'
    pokeRtePattern='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Poke\_assert\_rte'


    peekRtePatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Peek\_assert\_rte[[:print:]]*[[:blank:]]+Valid'
    pokeRtePatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Poke\_assert\_rte[[:print:]]*[[:blank:]]+Valid'

    peekPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Peek[[:print:]]*[[:blank:]]+Valid'
    pokePatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_Poke[[:print:]]*[[:blank:]]+Valid'
    incrementalInitPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Init[[:print:]]*[[:blank:]]+Valid'
    incrementalPeekFinishPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Peek\_Finish[[:print:]]*[[:blank:]]+Valid'
    incrementalPokeFinishPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Poke\_Finish[[:print:]]*[[:blank:]]+Valid'
    incrementalPeekNextPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Peek_\Next[[:print:]]*[[:blank:]]+Valid'
    incrementalPokeNextPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_Bitwalker\_IncrementalWalker\_Poke_\Next[[:print:]]*[[:blank:]]+Valid'
    lemmaPatternValid='^\[wp\]+[[:blank:]]+\[.*\][[:print:]]*typed\_lemma[[:print:]]*[[:blank:]]+Valid'


    #set -vx
    #set -vx
    #the environment variable WP_TIMEOUT is per default set to 30 seconds in file Makefile.template
    prog="${WP} -wp-out ${alg}.wp ${alg}.c"

    eval "$prog"> $tempFile
    #debug
    #cat $tempFile >fillFull.debug
    # pick up the number of generated goals
    let "goalCount= $goalCount + `grep -E $goalPattern $tempFile | $prg_sed -e 's/[\t | ][\t | ]*/\t/g' | cut -f2`"
    #debug
    echo "goalCount ${goalCount}"
    cat $tempFile > fill.debug
    #get all valid goals and write them into tempFile2


    let "peek=$peek + `grep -E $peekPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "peek ${peek}"
    let "peek_valid=$peek_valid + `grep -E $peekPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "peek_valid ${peek_valid}"



    let "peek_rte=$peek_rte + `grep -E $peekRtePattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "peek_rte ${peek_rte}"
    let "peek_rte_valid=$peek_rte_valid + `grep -E $peekRtePatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "peek_rte_valid ${peek_rte_valid}"


 #let "percent_peek=$valid +$nonvalid"
    let "func_peek=$peek -$peek_rte"
    echo "func_peek ${func_peek}"
    let "func_peek_valid=$peek_valid-$peek_rte_valid"
    echo "func_peek_valid ${func_peek_valid}"


    let "poke=$poke + `grep -E $pokePattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "poke ${poke}"
    let "poke_valid=$poke_valid + `grep -E $pokePatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "poke_valid ${poke_valid}"




    let "poke_rte=$poke_rte + `grep -E $pokeRtePattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "poke_rte ${poke_rte}"
    let "poke_rte_valid=$poke_rte_valid + `grep -E $pokeRtePatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "poke_rte_valid ${poke_rte_valid}"



    let "func_poke=$poke -$poke_rte"
    echo "func_poke ${func_poke}"
    let "func_poke_valid=$poke_valid -$poke_rte_valid"
    echo "func_poke_valid ${func_poke_valid}"


    let "incremental_init=$incremental_init + `grep -E $incrementalInitPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incrementalInit${incremental_init}"
    let "incremental_initValid=$incremental_initValid + `grep -E $incrementalInitPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incrementalInitValid${incremental_initValid}"






    let "incremental_peek_finish=$incremental_peek_finish + `grep -E $incrementalPeekFinishPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_peek_finish ${incremental_peek_finish}"
    let "incremental_peek_finishValid=$incremental_peek_finishValid + `grep -E $incrementalPeekFinishPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_peek_finishValid ${incremental_peek_finishValid}"



    let "incremental_poke_finish=$incremental_poke_finish + `grep -E $incrementalPokeFinishPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_poke_finish ${incremental_poke_finish}"
    let "incremental_poke_finishValid=$incremental_poke_finishValid + `grep -E $incrementalPokeFinishPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_poke_finishValid ${incremental_poke_finishValid}"



    let "incremental_peek_next=$incremental_peek_next + `grep -E $incrementalPeekNextPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_peek_next ${incremental_peek_next}"
    let "incremental_peek_nextValid=$incremental_peek_nextValid + `grep -E $incrementalPeekNextPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_peek_nextValid ${incremental_peek_nextValid}"


    let "incremental_poke_next=$incremental_poke_next + `grep -E $incrementalPokeNextPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_poke_next ${incremental_poke_next}"
    let "incremental_poke_nextValid=$incremental_poke_nextValid + `grep -E $incrementalPokeNextPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "incremental_poke_nextValid ${incremental_poke_nextValid}"



    let "lemma=$lemma + `grep -E $lemmaPattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "lemma ${lemma}"
    let "lemmaValid=$lemmaValid + `grep -E $lemmaPatternValid $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"
    echo "lemmaValid ${lemmaValid}"




 #let "percent_peek=$valid +$nonvalid"
    if [ $peek -ne 0 ]
        then let "percent_peek=(100*$peek_valid)/$peek"
        else    percent_peek=0
    fi
    echo "percent_peek ${percent_peek}"


    if [ $peek_rte -ne 0 ]
        then let "percent_rte_peek=(100*$peek_rte_valid)/$peek_rte"
        else    percent_rte_peek=0
        fi
    echo "percent_rte_peek ${percent_rte_peek}"


    if [ $func_peek -ne 0 ]
    then let "percent_func_peek=(100*$func_peek_valid)/$func_peek"
        else    percent_func_peek=0
        fi
    echo "percent_func_peek ${percent_func_peek}"

    if [ $poke -ne 0 ]
        then let "percent_poke=(100*$poke_valid)/$poke"
        else    percent_poke=0
    fi
    echo "percent_poke ${percent_poke}"


    if [ $poke_rte -ne 0 ]
        then let "percent_rte_poke=(100*$poke_rte_valid)/$poke_rte"
        else    percent_rte_poke=0
        fi
    echo "percent_rte_poke ${percent_rte_poke}"


    if [ $func_poke -ne 0 ]
    then let "percent_func_poke=(100*$func_poke_valid)/$func_poke"
        else    percent_func_poke=0
        fi
    echo "percent_func_poke ${percent_func_poke}"










    #let "valid=$valid + `grep -E $pattern $tempFile |$prg_sed -e 's/[\t | ][\t | ]*/\t/g' |cut -f4 |sort -u| wc -l`"

    #print values on std. output  using ";" as delimite
    #algorithm name;valid goals;number of generated goals
    #printf "%s;%d;%d;\n" $alg $valid $goalCount

    #debug
    #cat $tempFile2 > fill1.debug

    #cleanup variables
    unset prog
    unset pattern
    unset goalPattern
    unset goalCount
    unset alg
    unset prg_sed
    unset valid
  #  #delete temporary file on exit
    trap 'rm -f $tempfile' EXIT
    trap 'rm -f $tempFile2' EXIT
}



#reads raw date from stdout and generates a report
function reportWp()
{
   # echo "dldkfdlk"
    local goalCount=0
    local valid=0
    local percent=0
    local invalid=0
    local tempFile
    generateTempFile tempFile


    local prg_sed
    changeEditor prg_sed

    #call function extract_raw_data_wp and formating the output
    extract_raw_data_Wp $1 |$prg_sed -e 's/;/\t/g' > $tempFile
    let "valid= $valid + `cat $tempFile |  cut -f2`"
    let "goalCount= $goalCount +`cat $tempFile |  cut -f3`"
    if [ $goalCount -ne 0 ]
        then
             let "invalid=$goalCount -$valid"
             let "percent=(100*$valid)/$goalCount"
        else    percent=0
        fi
    printf  "verify  %-25s ( %-3d of %-3d )     %-3d %%\n" $1 $valid $goalCount $percent


    unset goalCount
    unset invalid
    unset percent
    unset valid
    unset prg_sed
  #  #delete temporary file on exit
    trap 'rm -f $tempfile' EXIT

}



#function startJessie:
# arg1: name of the algorithm
# arg2: name of the prover
# arg 3 is name of the variable where the function will write the count of valid proof goals
# arg 4 is name of the variable where the function will write the count of invlaid proof goals
function startJessie()
{
  local alg=${1##*/}
  local prover=${2##*/}

  checkAlg $alg
  checkProver $prover
  generateTempFile TEMPFILE


   # set the correct program for string manipulation.
   #if your operation system is linux  sed_var will be assigned to "sed", otherwise to "gsed"
    local prgsed='sed'
    if [[ 'uname' -ne 'Linux' ]]; then
        prgsed='gsed'
    fi

  #set -vx
  #frama-c.byte -jessie $JESSIE_FLAGS -jessie-atp ${prover} ${alg}.c &>$TEMPFILE 2> error.txt
  prog="${JESSIE} ${prover} ${alg}.c "
  eval "$prog" &>$TEMPFILE 2> error.txt
  #set +vx
 
  local validCount=0
  local failCount=0
	
   if [ ! -s  "error.txt" ]
    then 
    {
     local temp=`grep -E '^(unknown|valid|timeout|failure)' $TEMPFILE`
      if [ ! -z  "$temp"  ]
        then
          {
            echo "${temp}" > $TEMPFILE 
            validCount=`grep '^valid' $TEMPFILE | $prgsed -e 's/[\t | ][\t | ]*/\t/g' | cut -f3`
            failCount=`grep '^invalid' $TEMPFILE | $prgsed -e 's/[\t | ][\t | ]*/\t/g' | cut -f3`
            let "failCount= $failCount + `grep '^unknown' $TEMPFILE | $prgsed -e 's/[\t | ][\t | ]*/\t/g' | cut -f3`"
            let "failCount= $failCount + `grep '^failure' $TEMPFILE | $prgsed -e 's/[\t | ][\t | ]*/\t/g' | cut -f3`"
            let "failCount= $failCount + `grep '^timeout' $TEMPFILE | $prgsed -e 's/[\t | ][\t | ]*/\t/g' | cut -f3`"
          }
      fi
    }
fi
  
  local temp1=\$"$3" #get var name
  local temp2=\$"$4" #get var name
  #assign values
  eval "$3=\"$validCount\""
  eval "$4=\"$failCount\""

    #cleanup variables
    unset prog
    unset alg
    unset prover
    unset temp
    unset pattern
    unset temp1
    unset temp2
    unset failCount
    unset validCount
    #delete temporary file on exit
    trap 'rm -f $TEMPFILE' EXIT
}

#function startCoq:
# arg1: name of the algorithm
# arg2: name of the prover
# arg 3 is name of the variable where the function will write the count of valid proof goals
# arg 4 is name of the variable where the function will write the count of invlaid proof goals
function startCoq()
{
    local alg=${1##*/}
    local prover=${2##*/}

    checkAlg $alg
    checkProver $prover

    generateTempFile tmpFile
    generateTempFile tmpFile1
    generateTempFile tmpFile2
    
    pattern='^\[wp\][[:blank:]]*\[[[:alnum:]]+'
    #set -vx
    #the variables WP and COQ are set in file Makefile.template
    prog="${WP} -wp-out ${alg}.wp ${COQ} ${alg}.c"
    eval "$prog" | grep -E $pattern > $tmpFile
    

    #set +vx
    local tmp1=\$"$3" #get var name
    local tmp2=\$"$4" #get var name
    local inputFile=`grep -E 'Coq' $tmpFile`
    echo "${inputFile}" > $tmpFile1
    #debug
    #cat $tmpFile1 > equal.debug
    inputFile=`grep -E 'Alt-Ergo|WP\:simplified' $tmpFile`
    echo "${inputFile}" > $tmpFile2
    #debug
    #cat $tmpFile2 > equal.debug
    local tmpValid1=`grep -E 'Valid' $tmpFile1 | wc -l` #calculate goals proven by coq
    echo "Number of goals proven by Coq: ${tmpValid1}"
    #calculate goals proven by wp/alt-ergo and coq
    local tmpValid2=`grep -E 'Valid' $tmpFile2 | wc -l`
    let "tmpValid2=$tmpValid2 + $tmpValid1"
    #number of unproven goals
    local tmpInvalid=`grep -E 'Timeout|Degenerated|Failed|Stronger|Unknown' $tmpFile2 |wc -l` 
    #assign values
    eval "$3=\"$tmpValid2\""
    eval "$4=\"$tmpInvalid\""
 
    #cleanup variables
    unset prog
    unset pattern
    unset alg
    unset prover
    unset tmp1
    unset tmp2
    unset inputFile
    unset tmpValid1
    unset tmpValid2
    unset tmpInvalid
    
    #delete temporary file on exit
    trap 'rm -f $tmpFile' EXIT
    trap 'rm -f $tmpFile1' EXIT
    trap 'rm -f $tmpFile2' EXIT
}




#needs the algorithm name as first parameter and the prover as scecond one
function reportJessie()
{
  local alg=${1##*/}
  local prover=${2##*/}
  valid=0
  invalid=0
  startJessie $1 $2 'valid' 'invalid'
  #print values to stdout
  print $1 $valid $invalid $2
#print errror message into error error log if exist and remove error.txt

if [  -s  "error.txt" ]
    then 
    {  
        #append arreor message to stdout for user information
        printf "error"

      error_dir=${SCRIPT_DIR}/../errorlogs
        if [ ! -d $error_dir ]
          then
          {
            `mkdir $error_dir`
          }
        fi
   printf "\n\n##" >> $error_dir/error.log 
        printf "jessie ${prover} reports an error: prooving ${alg} failed  ##\n" >> $error_dir/error.log
        date >> $error_dir/error.log
        cat error.txt >> $error_dir/error.log
    }
  fi
  [ -f error.txt ] && rm error.txt
 printf "\n"

 #cleanup variables
 unset alg
 unset prover
 unset SCRIPT_DIR
 unset error_dir
 unset valid
 unset invalid
}

function reportCoq(){
  valid=0
  invalid=0
  startCoq $1 $2 'valid' 'invalid'
  print $1 $valid $invalid $2
  printf "\n"
  unset valid
  unset invalid
}

# input wp-report dateien 1-n : n<=9
# the last argument is the reference where the function saves the path to outputfile.
#function creates an inputfile for gnuplot

function statisticsWp()
{
    #generate a temporary file
    generateTempFile tempFile
    #debug
    echo "number of arguments $#"
    #generate file head

}

