#! /bin/bash

n=1

while (( $n <= 10 ))
do
	echo "$n"
	(( n++ ))
	xterm-terminal &
done


