#!/bin/bash

echo '################ 2*push, sub(1*positive/1*negative), dump and exit (EXPECTED) ###########'
echo '1101'
echo '################ 2*push, sub(1*positive/1*negative), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input