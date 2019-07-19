#!/bin/bash
to_verify='44.55
33
42'
echo '################ 6*push, 3*pop, dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 6*push, 3*pop, dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi