#!/bin/bash

echo '################ 5*push, dup, dump and exit (EXPECTED) ###########'
echo '54
54
42.42
44.55
33
42'
echo '################ 5*push, dup, dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input