#!/bin/bash
gcc -shared -fPIC -o libtest.so test.c
export LD_PRELOAD=/$PWD/libtest.so
