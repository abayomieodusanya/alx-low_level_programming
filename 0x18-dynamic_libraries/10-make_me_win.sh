#!/bin/bash
wget -P .. https://raw.githubusercontent.com/abayomieodusanya/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$pwd/../libtest.so"
