```
less hello.cpp			:Prints a couple of lines from a big file 

grep Hello hello.cpp    :Finds the word Hello in the file hello.cpp. Case Sensitive!

grep hello hello.cpp	:Finds the word Hello. doesnt care if its uppercase or lowercase

wc hello.cpp 			:Counts the number of words for you in a file

cat ./hello				:Prints the output of a hidden file

cat ./-					:Prints the output of any file that starts with "-"

file ./inhere/*			:tells the name of all of the files that are present in the inhere folder with there type

which brew				:gives you the path where brew is stored in your computer

tail hello.cpp			:gives you the end of the file

ps   					:shows you a list of all the processes that are running

top						:shows a list of processes in the sorted order

ping 					:shows if a particular website is running or not

find . -name '*.txt'    :find the name of all the files that end with .txt extension in the currrent directory

open hello.txt			:opens the file in the read only mode but when you press a button it opens it in the nano editor i think. 

cd / OR find ./			:takes you to the home directory OR gives you the list of all the things in the home directory i suppose 

 find / -user bandit7 
 -group bandit6 -size   :this will find the file that is owned by the user bandit7 and group bandit6 and has size and throw all of the 	33c 2>/dev/null         permission denied messages in the dev/null folder  


 cat data.txt | sort   :finds the uniqe line in the group of repeated lines. we piped it through sort because uniq only finds the unique 
 | uniq -u				that are adjacent.


 strings data.txt 	   :this command will search for all the strings in the file data.txt and then select the ones that have '=='in it 	 
 | grep ==
 						

echo | base64 -d 	   :this will decode base64 encoding into plain text
data.txt 					

base64 data.text	   :this will ecode the data.txt file into base64 encoding
 

tr 'A-Za-z' 
'N-ZA-Mn-za-m'		  :this will translate everything 13 position. ROT13 cipher
y < data.txt 		


cat data.txt |		 :translate the data inside data.txt that has been encoded using ROT13 algorithm 
tr “A-Za-z” 
“N-ZA-Mn-za-m”

tar xvf file.tar     :used to extract files
gzip -d data.gz
bzip2 -d data.bz2


telnet localhost    :once you enter connect to port 30000, you need to provide the correct password
30000

openssl s_client    :this will connect you to localhost 30001 and then you need to enter the password 
-connect
 localhost:30001


 cat /etc/bandit_pass/bandit16 | openssl s_client -connect localhost:31790 -quiet:
 this will send the passord of the bandit16 
  




find . -type f
-readable ! 
-executable -size 1033c :finds a file in the directory that is readable and non executable with a size of 1033 bytes




------------------------------

When you are inside the man page of a command

Enter /rose			:this will search for the keyword rose inside the man page
		n:			:jumps to the next word
		N:			:jumps to the previous word
		G1:			:jumps to the start of the file
		G:			:jumps to the end of the file

------------------------------------------
echo "hel">	data.txt    : this operator can be used to write hel in data.txt.
echo "hel"<< data.txt   : appends hel 



```