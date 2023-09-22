#!/bin/bash
wget -P /tmp/ https://raw.github.com/ibrahim378Edx/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =/tmp/nrandom.so