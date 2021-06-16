#! /bin/bash

var=31

readonly var

var=51

echo "$var"

hello(){
	echo "hello world"
}

readonly -f hello

hello(){
	echo "data is beautiful"
}

readonly -f

echo "******************************************"
#readonly -p
