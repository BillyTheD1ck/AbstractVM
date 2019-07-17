#!/bin/bash

echo '################ return value on "exit, ;;" (EXPECTED) ###########'
echo '0'
echo '################ return value on "exit, ;;" (GOT) ################'
../.././abstractVM 2>/dev/null < input
echo $?