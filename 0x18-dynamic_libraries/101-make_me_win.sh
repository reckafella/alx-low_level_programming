#!/bin/bash
wget -P .. https://raw.githubusercontent.com/reckafella/alx-low_level_programming/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD=../libgm.so ./gm
