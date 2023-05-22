#!/bin/bash
gcc -c -fPIC 6-absolute.c operations.c
gcc -shared 6-absolute.o operations.o -o 100-operations.so
