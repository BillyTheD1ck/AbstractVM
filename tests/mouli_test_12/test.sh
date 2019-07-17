#!/bin/bash
to_verify='1717177'
echo '################ 2*push, div(2*positive int32/int16), dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 2*push, div(2*positive int32/int16), dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi