#!/bin/bash
gcc -FPIC *.c
gcc -shared *.o -o liball.so
