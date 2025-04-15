#! /bin/bash

echo -e "ENter the name of the file \c"
read file_name

if [ -f $file_name ]
then 
	echo " $file_name is found"
else	
	echo " $file_name not found"
fi	
