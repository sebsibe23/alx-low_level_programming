#!/bin/bash
c_files_co=$(find . -type f -name "*.c")
for c_file_str in $c_files_co; do
	gcc -c -fPIC $c_file_str
done
gcc -shared -o liball.so *.o
