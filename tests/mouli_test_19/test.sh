#!/bin/bash
to_verify='E
p
i
t
e
c
h
'
echo '################ 7*push, 7*(print,pop), dump and exit (EXPECTED) ###########'
echo $to_verify
echo '################ 7*push, 7*(print,pop), dump and exit (GOT) ################'
nb=`../.././abstractVM 2>/dev/null < input`
echo $nb
if [[ $to_verify == $nb ]]; then
  	echo -e "\e[92m[SUCCESS]\e[0m"
else
	echo -e "\e[91m[FAILURE]\e[0m"
fi