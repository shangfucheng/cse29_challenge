# Coding Challenge Explanation

## Part 1: Debugging the Given Code

### Problem Description
You are given a piece of code in `debug.c` that is intended to print out all alphabet characters from 'a' to 'z' inclusive. However, there are some issues with the code preventing it from functioning correctly. Your task is to debug the code and ensure it prints out the correct characters.

### Debugging Steps
1. **Identify the Issue**: Start by carefully reading through the code to identify any obvious errors or logical mistakes. There are only 26 characters in alphabet.
2. **Analyze Variable Values**: Use print statements or a debugger(gdb) to inspect the values of variables during runtime. This can help pinpoint where the code is deviating from the expected behavior.
3. **Fix the Code**: Once the issue is identified, make the necessary corrections to fix the code and ensure it prints out all alphabet characters from 'a' to 'z' only. 
4. **Compile and Test**: Use the following command to compile the debug.c code.
```
gcc -o debug -Wall -g -std=gnu99 debug.c
```

### Expected Output
The expected output should be: 
```C
abcdefghijklmnopqrstuvwxyz
```

## Part 2: Implementing `char* word_finder(char *target_str, char *word_to_find)` Function

### Problem Description
You are tasked with implementing the `word_finder` function in `word_finder.c`, which finds the first occurrence of a substring within a string. 

### Explanation
The `word_finder` function takes one input strings: the `target_str` and one given string `word_to_find` (given in your program). It searches for the `word_to_find` within the `target_str` and returns a pointer to the first occurrence of the `word_to_find` in the `target_str`. If `word_to_find` is not found, the function returns `NULL`.

#### Algorithm
1. Iterate through the `target_str`.
2. For each character in the `target_str`, compare it with the first character of the `word_to_find`.
3. If the characters match, compare subsequent characters until either the entire `word_to_find` is matched or a mismatch is found.
4. If the entire `word_to_find` is matched, return a pointer to the start of the match in the `target_str`.
5. If no match is found, continue searching through the haystack.
6. If the end of the `target_str` is reached without finding a match, return `NULL` to indicate no match found.

### Example Input & Output:
```
// check the word_to_find in your word_finder.c.
char* word_to_find = "29";  

// terminal input
Enter the target_str: hello, world
// terminal output
'world' found at position 7
```

### Compile and Test:
```
gcc -o word_finder -Wall -g -std=gnu99 word_finder.c
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
