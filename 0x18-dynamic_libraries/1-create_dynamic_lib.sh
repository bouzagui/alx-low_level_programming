#!/bin/bash
gcc -c -FPIC *.c
gcc -shared *.o -o liball.so
