#! /bin/bash

echo -e "ENter the name of the file \c"
read file_name

if [ -f $file_name ]
then
	if [ -w $file_name ]
	then 
		echo "please type something. To quit please press ctrl + q "
		cat >> $file_name
	else
		echo "file does not have write permissions"
	fi
else
        echo " $file_name not found"
fi

