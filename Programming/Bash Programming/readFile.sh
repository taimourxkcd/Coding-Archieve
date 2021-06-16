#! /bin/bash


# an even easier way to read data from the files
while IFS= read line # mind that there is a space after the =
do
	echo $line
done < /etc/host.conf


#input redirection method
#while read p
#do
#	echo $p
#done < readFile.sh

#sending data into the while loop
#cat readFile.sh | while read p
#do
#	echo $p
#done 
	
