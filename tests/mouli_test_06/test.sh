#!/bin/bash

echo '################ 2*push, add (int16/int32), dump and exit (EXPECTED) ###########'
echo '32783'
echo '################ 2*push, add (int16/int32), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input