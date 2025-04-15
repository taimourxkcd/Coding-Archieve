#! /bin/bash

echo $1, $2, $3 '> echo $1, $2, $3'  # passing the arguments 

args=("$@")   # converts the argument in the array 

#echo ${args[0]} ${args[1]} ${args[2]} ${args[3]}

echo $@

echo $#  # prints the number of the argruments that are passed 
