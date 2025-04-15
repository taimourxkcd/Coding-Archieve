#! /bin/bash



factorial=1

echo please enter a number 
read n



	for (( i=n; i -ge 1 ;i--))
	do
		n=$((n * i))
	done

echo $factorial
