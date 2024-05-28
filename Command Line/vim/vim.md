- j 		: down
- k 		: up
- l 		: right
- h 		: left
- w 		: jump a word
- b 		: jump back a word
- x 		: delete one character in the front
- zz 		: center the text
- dd  		: delete the line
- shift + v + d : delete the line
- yyp           : copy one line and paste below
- yyP           : copy one line and paste above 
- v       	: begin highlighting
- V         	: hightlights the whole line
- reg		: keep track of the things you delete and the things that you yank
- i 		: opens the cursor to the left of current character, i means on the inside
- a      	: opens the cursor to the right of current character, a means on the outside
- I 		: goes to the first non-whitespace character in the line
- A 		: goes to the end of the line always including the trailing whitespace
- o 		: goes to the next line and turns insert mode on. also respects the language indentation
- O		: creates a new line above, works same as o












NOTES:
- in vim when you delete, you also yank
- when you yank a part of line and then do p, it pastes after the cursor. but when you do P, it pastes exactly
