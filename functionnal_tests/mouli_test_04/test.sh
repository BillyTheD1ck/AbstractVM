#!/bin/bash
to_verify='0'
echo '################ 2*push, add, assert and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 2*push, add, assert and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input
nb=`echo $?`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi
