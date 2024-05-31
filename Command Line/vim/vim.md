- j 			        : down
- k 			        : up
- l 			        : right
- h 			        : left
- w 			        : jump a word
- b 			        : jump back a word
- x 			        : delete one character in the front
- zz 			        : center the text
- dd  			        : delete the line
- shift + v + d 	    : delete the line
- yyp           	    : copy one line and paste below
- yyP           	    : copy one line and paste above 
- v       		        : begin highlighting
- V         		    : hightlights the whole line
- reg			        : keep track of the things you delete and the things that you yank
- i 		        	: opens the cursor to the left of current character, i means on the inside
- a      	        	: opens the cursor to the right of current character, a means on the outside
- I 			        : goes to the first non-whitespace character in the line
- A 			        : goes to the end of the line always including the trailing whitespace
- o 			        : goes to the next line and turns insert mode on. also respects the language indentation
- O			            : creates a new line above, works same as o
- 4dd			        : delete the next 4 lines
- d6j			        : i want to delete the 6 down lines
- shift + v + 6j	    : select the current line and then move down 6 and delete them
- dw			        : delete the current word
- 9k			        : jump 9 lines up
- shift + g OR G	    : you will go to the bottom
- Ex                    : open ups an explore window
- Vex                   : opens up a vertical explore window
- Sex                   : split explore just like the above
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














NOTES:
- in vim when you delete, you also yank
- when you yank a part of line and then do p, it pastes after the cursor. but when you do P, it pastes exactly
-








