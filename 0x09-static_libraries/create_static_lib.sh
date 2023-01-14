#!/bin/bash

#create object files for all .c files
gcc -c *.c

#create static library liball.a with all .o files in directory
ar rc liball.a *.o

