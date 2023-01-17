#!/bin/bash
gcc -shared -fPIC -c libtest.so test.c
export LD_PRELOAD=/$PWD/libtest.so
