#!/bin/bash

echo '################ 2*push, mul(1*positive int32/int32), dump and exit (EXPECTED) ###########'
echo '-42598465'
echo '################ 2*push, mul(1*positive int32/int32), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input