#!/bin/bash
to_verify='1'
echo '################ 2*push, mod(2*positive int16/int16), dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 2*push, mod(2*positive int16/int16), dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi