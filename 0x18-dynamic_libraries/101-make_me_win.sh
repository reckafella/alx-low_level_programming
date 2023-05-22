#!/bin/bash
LD_PRELOAD=./libtest.so ./gm
rm libtest.so
