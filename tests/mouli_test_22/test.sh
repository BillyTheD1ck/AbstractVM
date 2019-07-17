#!/bin/bash
to_verify='42
42.42
44.55
33
42'
echo '################ 5*push, dump, clear, dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 5*push, dump, clear, dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi