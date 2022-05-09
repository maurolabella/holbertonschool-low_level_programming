#!/bin/bash
echo -e "Creating files : ..."
gcc -c -fpic *.c
echo -e "Creating dynamic lib..."
gcc -shared -o libdynamic.so *.o
echo -e "Success!"