#! /bin/bash

num1=10.5
num2=23



echo "10.5 + 23 " | bc
echo "scale=20; 10.5 / 23 " | bc

echo "scale=2; sqrt($23)" | bc -l
echo "scale=2; 3^3" | bc 


#echo $(( num1+num2 ))
#echo $( expr $num1 + $num2 )


