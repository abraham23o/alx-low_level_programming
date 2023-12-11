#!/bin/bash

ls *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c 
gcc -shared -o liball.so *.o
nm -D liball.so
