```
pwd gives the path from the root to the current directory 
ls gives the list of all the files stored in a directory 
cd changes the directory 
mkdir/rem make the folder and delete them 
cd / go to the root directoy
cd .. move one directory up 
cd /  move one directoy down
rm -r dlete the folder and the files inside it
touch used to create a file
mkdir --help gives the details of the command that is being used
cp sampel.txt Music used to copy files 
mv used to copy files
mv sample.txt change.txt change the name of the file
echo write data into the file
cat display the contents of a file
nano edits the text in GNU editor 
df -m checks the space in the partition 

pw .. displays that you are in your main directory 
cd // takes you to the root folder
main pwd
cp -r hello ~/Documents

++++++++++++++++++++++++++++++++++++++++++++ running c and c++ program
sudo gedit hello.cpp 
sudo gedit hello.c
sudo gcc hello.c
sudo g++ hello.cpp
./a.out

----------------------------------------------------------------------------
uname -r     					: gives you the name of the linux distribution you are running 
ls /usr/src  					:gives you the kernel modules i think 
cat /etc/shells 				: tells us what types of shells are supported by your ubuntu 
touch hello.sh  				: creates a file
chmod +x hello.sh				:change permission of the files
ls -al                       			:tells you about the permissions that the file has 
echo -e                     			: enables the backslash eg: "enter the name c:\" OR it keeps the cursor in the same line 
-f						:if the file is found [regular or not ]
-d						:if the directory exists or not 
-b						:used for block special file
-c						:used for character special file
-s						:checks if the file is empty or not 
-l						:details about the files in a directory like size name etc
-r						:if the file has the read permission
-w						:if the file has the write permission
chmod -w test.txt				:removes the write permission from the file
chmod +w test.txt				:provides the write permission from the file
[ something (-a) (-o) something ]		:AND/OR   
[[ something && something ]]    		:AND/OR operator also allowed
[something] && [sometning]			:AND/OR
echo $(( num1+num2 ))				:arithmetic operations
echo $( expr $num1 + $num2 )			:also valid arithmethic operation however use (\*) baskslash with the astrik 
echo " $num1 + $num2 " | bc		        :floating point calcultions however this does not work for divison 
echo "scale=2; 10.5 / 23 " | bc			:for division of the floating points calcultions
echo "scale=2; sqrt($23)" | bc -l		:use sqrt from the math liberary 
echo "${os[@]}"					:print the array "os"
echo "${!os[@]}"				:prints the index of the arrays
echo "${#os[@]}"				:prints the total number of the elements in the array
os[3]="mac"					:appends the element to the array OS
unset os[2]					:removes the element 2 from the array

string=tami					: also works on the string 
echo "${string[@]}"

while [ $n -le 10 ] OR (( $N <= 10 ))  		:both of them work fine 


---------------------------------------------------------------------------------------------------------
lsmod 				:gives you all of the modules that are installed into your system
rmmod lp			:removes the module you want to remove 
modprobe lp 			: loads the module to the top of the list 
cd /lib/modules/		: contains the modules that we have 
--------------------------------------------------------------------------------------------------------------
**********************************SHARED MEMEORY**************************************************************

tfok				: "a.c" -> gets a numeric key assiociated with the shared memory
shmget     			: key   ->shmget uses that key to create a block of shared memory \
					returns a shared memory block 
shmat				: block ->uses the block id to map the block id into this processes addresses address space
shmdt				: detaches like "i am done with this memory block, just take it away !!!"


shmctl				:

------------------------------------------------------------------------------------------------------------------------
***************************************************thread***************************************************************


sudo gcc -pthread -o term2 class2.c           : this is the correct way to run  the thread
sudo gcc thread1.c -lpthread		      : this is correct and produces a.out file 


sudo gcc -pthread -o dummy dummy.c -lm	       : linking math and thread at the same time. cool !!!


OPENMP:
	
	-fopenmp


------------------------------------------------------------------------------------------------------------------------
openssl list -cipher-commands











```