#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcliball.a *.o
ranlib liball.a
