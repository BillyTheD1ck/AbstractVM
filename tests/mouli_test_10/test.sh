#!/bin/bash

echo '################ 2*push, div(2*positive int32/int16), dump and exit (EXPECTED) ###########'
echo '-173'
echo '################ 2*push, div(2*positive int32/int16), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input