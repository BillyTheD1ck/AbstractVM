#!/bin/bash

echo '################ 5*push, dump, clear, dump and exit (EXPECTED) ###########'
echo '42
42.42
44.55
33
42'
echo '################ 5*push, dump, clear, dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input