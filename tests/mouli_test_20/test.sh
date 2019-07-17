#!/bin/bash

echo '################ 12*push, dump and exit (EXPECTED) ###########'
echo '3
2432
49
51
3.14159
-3453454
-434
678
-42.42
44.55
33333
89042'
echo '################ 12*push, dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input