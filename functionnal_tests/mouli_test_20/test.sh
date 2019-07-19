#!/bin/bash
to_verify='3
2432
49
51
3.14159
-3453454
-434
678
-42.42
44.55
33333
89042'
echo '################ 12*push, dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 12*push, dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi