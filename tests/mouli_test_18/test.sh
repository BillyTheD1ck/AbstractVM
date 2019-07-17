#!/bin/bash

echo '################ 6*push, 3*pop, dump and exit (EXPECTED) ###########'
echo '44.55
33
42'
echo '################ 6*push, 3*pop, dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input