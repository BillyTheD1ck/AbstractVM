#!/bin/bash

echo '################ push, assert and exit (EXPECTED) ###########'
echo '0'
echo '################ push, assert and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input
echo $?