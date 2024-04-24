# Coding Challenge Explanation
### Steps to start: 
1. SSH into your ieng6 server
2. Clone github repo to your ieng6 server
3. Once finish, push to your github repo
4. Submit on gradescope from your github
5. You can only see error checks in gradescope, no test cases will be shown. 
6. Please check off with the teaching staff there when you finish, they will need to manually delete the repo in your ieng6 server and your remote repo.
7. During the Coding Challenge, you should be only working on the ieng6 terminal. Do not open any web pages except your github page and gradescope. You can find all vim, gdb and git commands in the bottom of this file.

## Part 1: Debugging the Given Code

### Problem Description
You are given a piece of code in `debug.c` that is intended to print out all alphabet characters from 'a' to 'z' inclusive. However, there are some issues with the code preventing it from functioning correctly. Your task is to debug the code and ensure it prints out the correct characters.Please do not modify the lines that has comments "DO NOT Modify". 
### Note: DO NOT use Brackets to access array values in Part 1, eg: arry[i]

### Debugging Steps
1. **Identify the Issue**: Start by carefully reading through the code to identify any obvious errors or logical mistakes.
2. **Analyze Variable Values**: Use print statements or a debugger(gdb) to inspect the values of variables during runtime. This can help pinpoint where the code is deviating from the expected behavior.
3. **Fix the Code**: Once the issue is identified, make the necessary corrections to fix the code and ensure it prints out all alphabet characters from 'a' to 'z' only. 
4. **Compile and Test**: Use the following command to compile the debug.c code.
```
gcc -o debug -Wall -g -std=gnu99 debug.c
```
5. **To Run Your Code**: 
```
./debug
```

### Expected Output
The expected output should be the following with no leading and trailing spaces: 
```C
abcdefghijklmnopqrstuvwxyz
```

## Part 2: Implement `word_finder(...)` Function

### Problem Description
The task entails the implementation of the `word_finder` function within the `word_finder.c` file. This function is designed to identify the first occurrence of a specified string within another string. It should be implemented without reliance on any additional libraries beyond those provided. 

**Function Signature:**
```c
char* word_finder(char* target_str, int target_len, char* word_to_find, int word_len );
```

### Explanation:

The `word_finder` function takes four arguments:

- **target_str:** The string that will be searched for. (this is user input, can be any string with Max length of 300)
- **target_len:** The length of `target_str`.
- **word_to_find:** The string to search for in `target_str`. (we will test the same word during grading, so DO NOT change)
- **word_len:** The length of the `word_to_find` string. 

**Return value:**  
Returns a pointer to the first occurrence of the `word_to_find` in the `target_str`. If `word_to_find` is not found, the function returns `NULL`.


#### Algorithm
1. Iterate through the `target_str`.
2. For each character in the `target_str`, compare it with the first character of the `word_to_find`.
3. If the characters match, compare subsequent characters until either the entire `word_to_find` is matched or a mismatch is found.
4. If the entire `word_to_find` is matched, return a pointer to the start of the match in the `target_str`.
5. If no match is found, continue searching through the target_str.
6. If the end of the `target_str` is reached without finding a match, return `NULL` to indicate no match found.

### Example Input & Output:
```
// check the word_to_find in your word_finder.c.
char* word_to_find = "world";  

// terminal input
Enter the target_str: hello, world
// terminal output
'world' found at position 7
```

### Compile and Test:
```
gcc -o word_finder -Wall -g -std=gnu99 word_finder.c
```
### Run the Program:
```
./word_finder
```


# Vim Cheat Sheet

## Movement

- `h`: Move left
- `j`: Move down
- `k`: Move up
- `l`: Move right
- `w`: Jump forward to the start of a word
- `W`: Jump forward to the start of a word (words can contain punctuation)
- `e`: Jump forward to the end of a word
- `E`: Jump forward to the end of a word (words can contain punctuation)
- `b`: Jump backward to the start of a word
- `B`: Jump backward to the start of a word (words can contain punctuation)
- `0`: Jump to the start of the line
- `^`: Jump to the first non-blank character of the line
- `$`: Jump to the end of the line
- `gg`: Go to the first line of the document
- `G`: Go to the last line of the document
- `:n`: Jump to line n
- `}`: Jump to the next paragraph
- `{`: Jump to the previous paragraph
- `Ctrl + f`: Jump forward one full screen
- `Ctrl + b`: Jump backward one full screen
- `Ctrl + d`: Jump forward half a screen
- `Ctrl + u`: Jump backward half a screen

## Editing

- `i`: Insert before the cursor
- `I`: Insert at the beginning of the line
- `a`: Insert after the cursor
- `A`: Insert at the end of the line
- `o`: Open a new line below the current line
- `O`: Open a new line above the current line
- `r`: Replace a single character
- `R`: Replace characters starting from the current cursor position
- `x`: Delete a single character
- `dd`: Delete the current line
- `dw`: Delete from the cursor position to the start of the next word
- `d$`: Delete from the cursor position to the end of the line
- `d^`: Delete from the cursor position to the first non-blank character of the line
- `u`: Undo the last change
- `Ctrl + r`: Redo the last undone change

## Search and Replace

- `/pattern`: Search forward for the pattern
- `?pattern`: Search backward for the pattern
- `n`: Repeat the last search
- `N`: Repeat the last search in the opposite direction
- `:%s/old/new/g`: Replace all occurrences of 'old' with 'new' in the entire file
- `:s/old/new/g`: Replace all occurrences of 'old' with 'new' in the current line
- `:n,ms/old/new/g`: Replace all occurrences of 'old' with 'new' between lines n and m

## Exiting

- `:q`: Quit Vim
- `:q!`: Quit Vim without saving changes
- `:w`: Save the changes
- `:wq` or `:x`: Save and quit
- `ZZ`: Save and quit


# GDB Commands Cheat Sheet

## Basic Commands

- `gdb <executable>`: Start GDB with the specified executable.
- `run [args]`: Start the program with optional arguments.
- `break <line_number>`: Set a breakpoint at the specified line number.
- `break <function_name>`: Set a breakpoint at the beginning of the specified function.
- `break <filename>:<line_number>`: Set a breakpoint at a specific file and line.
- `info breakpoints`: List all breakpoints.
- `delete [breakpoint_number]`: Delete the specified breakpoint or all breakpoints if no number is provided.
- `clear <location>`: Clear breakpoint(s) set at the specified location.

## Running the Program

- `run [args]`: Start the program with optional arguments.
- `continue`: Continue running the program until the next breakpoint.
- `next`: Execute the next line of code, stepping over function calls.
- `step`: Execute the next line of code, stepping into function calls.
- `finish`: Continue running until the current function is finished.
- `return`: Continue running until the current function returns.
- `until <line_number>`: Continue running until the specified line number is reached.
- `jump <line_number>`: Set the program counter to the specified line number.

## Examining Variables and Memory

- `print <variable>`: Print the value of the specified variable.
- `display <variable>`: Print the value of the specified variable every time the program stops.
- `info locals`: Show the values of all local variables in the current stack frame.
- `info args`: Show the values of all function arguments in the current stack frame.
- `info registers`: Show the values of all registers.
- `x/<n><format> <address/expression>`: Examine memory at the specified address/expression with the specified format.
  - `<n>`: Number of units to display.
  - `<format>`: Format of the data (e.g., `x` for hexadecimal, `d` for decimal).
  - `<address/expression>`: Memory address or expression to examine.

## Stack and Backtrace

- `bt`: Print a backtrace of the current call stack.
- `frame <n>`: Select stack frame `n`.
- `info frame`: Show detailed information about the selected frame.
- `up`: Move up one level in the call stack.
- `down`: Move down one level in the call stack.

## Debugging Control

- `continue`: Continue running the program until the next breakpoint.
- `finish`: Continue running until the current function is finished.
- `step`: Execute the next line of code, stepping into function calls.
- `next`: Execute the next line of code, stepping over function calls.
- `until <line_number>`: Continue running until the specified line number is reached.
- `jump <line_number>`: Set the program counter to the specified line number.
- `kill`: Terminate the program being debugged.
- `quit`: Exit GDB.

## Additional Information

- `help [command]`: Display help information for the specified command or l


# Git Commands Cheat Sheet

## Creating Repositories

- `git clone <repository_url>`: Clone an existing repository into a new directory.
- `git clone <repository_url> <directory_name>`: Clone a repository into a specific directory.

## Basic Snapshotting

- `git add <file>`: Add a file to the staging area.
- `git add .`: Add all changes to the staging area.
- `git commit -m "Commit message"`: Commit staged changes with a message.
- `git commit -am "Commit message"`: Add all changes and commit with a message (excluding untracked files).

## Branching & Merging

- `git branch`: List all branches.
- `git branch <branch_name>`: Create a new branch.
- `git checkout <branch_name>`: Switch to a different branch.
- `git checkout -b <branch_name>`: Create and switch to a new branch.
- `git merge <branch_name>`: Merge changes from another branch into the current branch.
- `git merge --abort`: Abort the merge process and reset the changes.

## Remote Repositories

- `git remote add <name> <url>`: Add a new remote repository.
- `git remote -v`: List all remote repositories.
- `git push <remote_name> <branch_name>`: Push changes to a remote repository.
- `git pull <remote_name> <branch_name>`: Fetch changes from a remote repository and merge them into the current branch.
- `git fetch <remote_name>`: Fetch changes from a remote repository.

## Inspecting Changes

- `git status`: Show the status of the working directory and staging area.
- `git log`: Show commit history.
- `git log --oneline`: Show abbreviated commit history.
- `git diff`: Show changes between the working directory and the staging area.
- `git diff --staged`: Show changes between the staging area and the repository.

## Undoing Changes

- `git checkout -- <file>`: Discard changes in the working directory for a specific file.
- `git reset HEAD <file>`: Unstage changes in the staging area for a specific file.
- `git reset --soft HEAD~1`: Undo the last commit and move changes to the staging area.
- `git reset --hard HEAD~1`: Undo the last commit and discard changes.

## Tagging

- `git tag`: List all tags.
- `git tag <tag_name>`: Create a new tag for the current commit.
- `git tag -a <tag_name> -m "Tag message"`: Create an annotated tag with a message.
- `git push --tags`: Push tags to a remote repository.

## Additional Commands

- `git clean -n`: List untracked files that will be removed.
- `git clean -f`: Remove untracked files from the working directory.
- `git stash`: Stash changes in the working directory.
- `git stash pop`: Apply stashed changes to the working directory and remove them from the stash.

## Helpful Tips

- `git help <command>`: Show help information for a specific command.
- `git <command> --help`: Show help information for a specific command.
- `git <command> -h`: Show help information for a specific command.

