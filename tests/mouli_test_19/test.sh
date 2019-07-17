#!/bin/bash

echo '################ 7*push, 7*(print,pop), dump and exit (EXPECTED) ###########'
echo 'E
p
i
t
e
c
h
'
echo '################ 7*push, 7*(print,pop), dump and exit (GOT) ################'
../.././abstractVM 2>/dev/null < input