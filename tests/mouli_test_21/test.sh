#!/bin/bash

echo '################ 4*push, swap, dump and exit (EXPECTED) ###########'
echo '4321
-34
678.343
656'
echo '################ 4*push, swap, dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input