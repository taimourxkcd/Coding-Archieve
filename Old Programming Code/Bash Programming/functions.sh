#! /bin/bash

# EXAMPLE OF THE FUNCTION 

usuage(){
	echo "you need to provide an argument : "
	echo "usuage : $0 $file_name"
}


function is_file_exist(){
	local file="$1"
	[[ -f "$file" ]] && return 0 || return 1
}

[[ $# -eq 0 ]] && usuage

if( is_file_exist "$1")
then 
	echo "FIle is found"
else
	echo "FIle not found"
fi












# LEARING ABOUT FUNCTIONS 

#function print(){
#	local name=$1
#	echo "the fucking name is $name " 
#}
#quit (){
#	exit
#}


#name="Tommy"

#echo "fuck you $name : before bitch"

#print hello

#quit

#echo "fuck you $name : after bitch"






