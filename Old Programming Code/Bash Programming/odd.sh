#! /bin/bash

count=1
i=1


while [ $count -ne 100 ]
do
	echo $i
	i=$(( $i+2 ))
    count=$(( $count+1 ))
done
 
