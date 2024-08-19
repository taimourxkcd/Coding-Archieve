- j 			        : down
- k 			        : up
- l 			        : right
- h 			        : left
- w 			        : jump a word
- u                     : undo a command
- ctrl + r              : redo a command
- U                     : undo all the changes done on the current line 
- $ 			        : takes you to the end of the line 
- b 			        : jump back a word
- 0  			        : takes you to the start of the line 
- _                     : takes you to the start of the first word in the line
- gg                    : takes you to the start of the file
- 500G                  : takes you to line number 500 
- G                     : takes you to the end of the file
- ry                    : replaces the character with the next character that is below the cursor
- ce                    : move the cursor on the character, it will remove all the character in front of it and activates insert mode 
- cc                    : does the same thing as ce but for the whole line 
- c$                    : deletes the rest of the line after the cursor and puts you in insert mode
- x 			        : delete one character in the front
- X 			        : delete one character behind the cursor  
- zz 			        : center the text
- dd  			        : delete the line
- d2d  			        : delete the 2 lines below 
- shift + v + d 	    : delete the line
- yyp           	    : copy one line and paste below
- p or P                : lower case p inserts the line below the current line. Upper case pastes it above the current line
- yyP           	    : copy one line and paste above 
- v       		        : begin highlighting
- V         		    : hightlights the whole line
- reg			        : keep track of the things you delete and the things that you yank
- i 		        	: opens the cursor to the left of current character, i means on the inside
- a      	        	: opens the cursor to the right of current character, a means on the outside
- %                     : brings you to the end of the closing braces
- c%                    : gets rid of the things that are inside the parenthesis
- I 			        : goes to the first non-whitespace character in the line
- A 			        : goes to the end of the line always including the trailing whitespace
- ea                    : moves you to the end of the current work and puts you in insert mode 
- o 			        : goes to the next line and turns insert mode on. also respects the language indentation
- O			            : creates a new line above, works same as o
- 4dd			        : delete the next 4 lines
- d6j			        : i want to delete the 6 down lines
- shift + v + 6j	    : select the current line and then move down 6 and delete them
- dw || de			    : delete the current word
- yiw                   : copy the current word and move the cursor to the start
- viwp                  : replace the current word under the cursor with the one that is copied
- caw   			    : delete the current word the cursor is on right now and puts you in the insert mode 
- bd    			    : delete the previous word
- 9k			        : jump 9 lines up
- shift + g OR G	    : you will go to the bottom
- Ex                    : open ups an explore window
- Vex                   : opens up a vertical explore window
- Sex                   : split explore just like the above
- /                     : does the search. you can use 'n' to jump forward and 'N' to jump backward
- vi + (                : selects everything that is inside the parenthesis
-------------------------------------------------------------------------------------------------------
- :set scrolloff=8	        	: when you are away 8 lines from the end of the page, it automatically scrolls
- :set number			        : sets the line numbers into your vim
- :set relativenumber OR rnu   	: sets line numbering relative to the current line
-------------------------------------------------------------------------------------------------------
- cntrl + n		                : to move next in the help menu
- cntrl + b  		            : to move back in the help menu
- cntrl + w                     : moves you in the window mode
- cntrl + ^                     : moves you to the previous file you were in
- cntrl + o                     : you have a jumplist, it hops the files/directories that are in that jumplist
- cntrl + i                     : to go forward in a jumplist 
- cntrl + d                     : this shows you a popup menu with the recommended commands
- shift + d                     : deletes everything forward from your cursor in the current line
- cntrl + p                     : this would go backward in a list ( when doing fuzzy find)
- cntrl + n                     : this would go forward in a list ( when doing fuzzy find)
- cntrl + j                     : grep a word. you get a files list, then you can go forward with this from one file to another
- cntrl + k                     : grep a word. you get a files list, then you can go backward with this from one file to another
- cntrl + w                     : when in insert mode, deletes the prvious word
- cntrl + u                     : when in insert mode, deletes the whole line before the cursor 
- cntrl + G                     : tells you the info about the current file 
--------------------------------WINDOWS MODE-----------------------------------------------------------
- s                             : splits the screen horizontally 
- v                             : splits the screen vertically
- o                             : when you have a bunch of splits open and you do o, it closes all the extra tabs except one
---------------------------------MARKS------------------------------------------------------------------
- m + A                         : bookmark a line a file that you can find from anywhere in the director
- m + a                         : bookmark a line in a file that you can find when you are in that file
--------------------------------------------------------------------------------------------------------
- :source %                     : we have sourced our file, like executed our current file eg init.vim
- :e                            : create new files 
- :jumplist                     : shows you your jump list




-------------------------------------REGEX---------------------------------------------------------------
- /err.*                        : selects everything that has err in it .*
- s/error/taimour               : selects error from and replaces with taimour, you can do this over a highlighted region 
- %s/foo/taimour                : same as above but it searches in the whole file
- s/foo/taimour/g               : replaces all the foo in one line with taimour, can do the same in the whole file
- s/foo/taimour/gc              : replaces all the foo with taimour but also asks you, yes or no. you can press 'y' or 'n'






NOTES:
- in vim when you delete, you also yank
- when you yank a part of line and then do p, it pastes after the cursor. but when you do P, it pastes exactly
-








