#! /bin/bash

n=1
while [ $n -le 3 ] #le stands for less than ore qual to.
do
	if [[ $n -eq 4 ]]
	then
		echo “terminated”
	else 
	  echo “index: $n”
	n=$(( $n+1 ))
	fi
done


