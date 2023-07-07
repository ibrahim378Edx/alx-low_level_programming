#!/bin/bash
gcc -g -0 -c *.c
ar rc liball.a *.o
ranlib liball.a
