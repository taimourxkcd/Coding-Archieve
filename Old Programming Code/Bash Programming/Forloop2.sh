#! /bin/bash

for item in *
do
	if [ -d $item ] 
	then
		echo $itemcd cd
	fi
done
