#!/bin/bash
wget -P /tmp https://https://github.com/Oyiad23/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libdynamic.o
export LD_PRELOAD=/tmp/libdynamic.o
