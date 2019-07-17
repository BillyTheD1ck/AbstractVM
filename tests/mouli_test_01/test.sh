#!/bin/bash

echo '################ return value on ";;" (EXPECTED) ###########'
echo '0'
echo '################ return value on ";;" (GOT) ################'
../.././abstractVM 2>/dev/null < input
echo $?