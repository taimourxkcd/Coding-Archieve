#! /bin/bash

file=/home/taimour/Documents/bash/phase2/expendable.txt
trap "rm -f $file tra&& echo file deleted bitch" 0 2 15

echo "pid is $$"

while (( COUNT < 10 ))
do
	sleep 2
	(( COUNT ++ ))
	echo $COUNT
done
exit 0
