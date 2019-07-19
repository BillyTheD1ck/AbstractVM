#!/bin/bash
to_verify='4321
-34
678.343
656'
echo '################ 4*push, swap, dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 4*push, swap, dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi