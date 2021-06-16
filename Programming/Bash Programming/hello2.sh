#! /bin/bash

#echo please enter your name 
#read name1  name2 name3
#echo "$name1 , $name2 ,$name3"

#read -p 'username : ' user_var   # in a single line 
#read -sp 'password : ' user_pass # helps to not show anything on the screen
#echo enter the username $username
#echo enter the password $user_pass

echo enter names
read -a names
echo "Names : ${names[0]} , ${names[1]} , ${names[2]}"
