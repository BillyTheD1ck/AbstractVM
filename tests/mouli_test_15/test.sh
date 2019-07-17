#!/bin/bash

echo '################ 2*push, mul(2*positive int32/int32), dump and exit (EXPECTED) ###########'
echo '1073676289'
echo '################ 2*push, mul(2*positive int32/int32), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input