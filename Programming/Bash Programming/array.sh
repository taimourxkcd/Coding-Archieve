#! /bin/bash

os=('ubuntu' 'windows' 'kali linux')
os[3]="mac"

unset os[2]

echo "${os[@]}"
echo "${os[2]}"
echo "${!os[@]}"
echo "${#os[@]}"

string=tami
echo "${string[@]}"
echo "${string[0]}"
echo "${string[1]}"  #
echo "${#string[@]}"

