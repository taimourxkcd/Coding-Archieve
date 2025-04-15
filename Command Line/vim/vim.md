### Basic Movements
- `j` : Move down
- `k` : Move up
- `l` : Move right
- `h` : Move left
- `w` : Jump forward by a word
- `b` : Jump backward by a word
- `gg` : Go to the start of the file
- `500G` : Go to line number 500
- `G` : Go to the end of the file
- `0` : Move to the start of the line
- `_` : Move to the start of the first word in the line
- `$` : Move to the end of the line

---

### Undo & Redo
- `u` : Undo last command
- `ctrl + r` : Redo the last undone command
- `U` : Undo all changes made on the current line

---

### Replacing & Editing
- `ry` : Replace the character under the cursor with the next character
- `ce` : Remove characters in front of the cursor and enter insert mode
- `cc` : Remove the entire line and enter insert mode
- `c$` : Delete from the cursor to the end of the line and enter insert mode
- `d$` : Delete from the cursor to the end of the line (without entering insert mode)
- `d#` : Delete the word before the cursor


---

### Deletion
- `x` : Delete the character under the cursor
- `X` : Delete the character behind the cursor
- `dd` : Delete the current line
- `d2d` : Delete the next 2 lines
- `shift + v + d` : Delete the current selected line
- `4dd` : Delete the next 4 lines
- `d6j` : Delete the next 6 lines
- `shift + v + 6j` : Select the current line and delete the next 6 lines
- `dw` or `de` : Delete the current word
- `bd` : Delete the previous word
- `D` : Delete everything from the cursor to the end of the line

---

### Copying & Pasting
- `yyp` : Copy the current line and paste below
- `p` : Paste the copied text below the current line
- `P` : Paste the copied text above the current line
- `yyP` : Copy the current line and paste above
- `yiw` : Copy the current word
- `viwp` : Replace the current word with the copied one
- `caw` : Delete the current word and enter insert mode
- `ggVG + "+y` : Copy the entire file to the system clipboard
- `+y` : Copy to the system clipboard

---

### Highlighting & Selecting
- `v`      : Start visual mode (highlight text)
- `V`      : Highlight the entire line
- `vi + (` : Select everything inside parentheses
- `e`      : selects all the text b/w the inverted commas "both single and double" and brackets as well of all kinds


---

### Cursor Positioning
- `I` : Move to the first non-whitespace character in the line and enter insert mode
- `A` : Move to the end of the line and enter insert mode
- `o` : Open a new line below the current line and enter insert mode
- `O` : Open a new line above the current line and enter insert mode
- `^` : Move to the start of the first word in the line

---

### Miscellaneous
- `zz` : Center the screen on the current line
- `%` : Jump to the matching brace
- `c%` : Delete everything inside parentheses and enter insert mode
- `J` : Join the current line with the line below
- `f + {char}` : Jump to the next occurrence of the specified character
- `ae` : Move to the end of the word and enter insert mode




### Visual Mode
- `>` or `2>` : Indent the selected text and move it 1 tab forward (or specify the number of tabs).
- `<` or `2<` : Unindent the selected text and move it 1 tab backward (or specify the number of tabs).

---

### Vim Settings
- `:set scrolloff=8` : Automatically scroll when you are within 8 lines from the bottom of the page.
- `:set number` : Display line numbers.
- `:set relativenumber` or `:set rnu` : Display relative line numbers from the current line.

---

### Navigation in Help Menu
- `ctrl + n` : Move to the next section in the help menu.
- `ctrl + b` : Move back in the help menu.

---

### Window & File Management
- `ctrl + w` : Enter window mode for managing multiple splits.
- `ctrl + ^` : Switch to the previously opened file.
- `ctrl + o` : Jump backward through the jumplist (files/directories history).
- `ctrl + i` : Jump forward through the jumplist.

---

### Command Suggestions & Deletion
- `ctrl + d` : Show a popup menu with recommended commands.
- `shift + d` : Delete everything forward from the cursor on the current line.
- `ctrl + w` (Insert Mode) : Delete the previous word.
- `ctrl + u` (Insert Mode) : Delete the entire line before the cursor.

---

### Fuzzy Finding & Grepping
- `ctrl + p` : Move backward in a list (like fuzzy finding).
- `ctrl + n` : Move forward in a list (like fuzzy finding).
- `ctrl + j` : Grep a word and navigate forward through search results.
- `ctrl + k` : Grep a word and navigate backward through search results.

---

### File Information
- `ctrl + G` : Display information about the current file.

### Windows Mode
- `s` : Split the screen horizontally.
- `v` : Split the screen vertically.
- `o` : Close all other open splits except the current one.

---

### Marks
- `m + A` : Bookmark a line in a file that can be accessed from anywhere in the directory.
- `m + a` : Bookmark a line in a file, accessible only within the same file.

---

### File Management
- `:source %` : Source the current file (e.g., `init.vim`).
- `:e` : Create a new file.
- `:jumplist` : Display the list of recent file jumps.

---

### Regex
- `/err.*` : Select everything containing "err" followed by any characters.
- `s/error/taimour` : Replace `"error"` with `"taimour"` in the current line or a highlighted region.
- `%s/foo/taimour` : Replace `"foo"` with `"taimour"` throughout the entire file.
- `s/foo/taimour/g` : Replace all `"foo"` in the current line with `"taimour"`.
- `s/foo/taimour/gc` : Replace all `"foo"` with `"taimour"` in the current line, prompting for confirmation (`y` or `n`).

---

### Notes
- In Vim, deleting also yanks the content.
- When you yank a part of a line and paste using `p`, it pastes after the cursor.
- When you paste using `P`, it pastes exactly at the cursor position.

---

### Help
- `:help options` : Open the help documentation for the options menu.
