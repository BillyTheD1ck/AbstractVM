#!/bin/bash

echo '################ 2*push, add, assert and exit (EXPECTED) ###########'
echo '0'
echo '################ 2*push, add, assert and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input
echo $?