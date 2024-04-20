# Coding Challenge Explanation

## Part 1: Debugging the Given Code

### Problem Description
You are given a piece of code in `debug.c` that is intended to print out all alphabet characters from 'a' to 'z' inclusive. However, there are some issues with the code preventing it from functioning correctly. Your task is to debug the code and ensure it prints out the correct characters.

### Debugging Steps
1. **Identify the Issue**: Start by carefully reading through the code to identify any obvious errors or logical mistakes. There are only 26 characters in alphabet, why the array has size of 27?
2. **Analyze Variable Values**: Use print statements or a debugger(gdb) to inspect the values of variables during runtime. This can help pinpoint where the code is deviating from the expected behavior.
3. **Fix the Code**: Once the issue is identified, make the necessary corrections to fix the code and ensure it prints out all alphabet characters from 'a' to 'z' only. 
4. **Compile and Test**: Use the following command to compile the debug.c code.
```C
gcc -o debug -Wall -std=gnu99 debug.c
```

### Expected Output
The expected output should be: 
```C
abcdefghijklmnopqrstuvwxyz
```

## Part 2: Implementing strstr Function

### Problem Description
You are tasked with implementing the `custom_strstr` function in `strstr.c`, which finds the first occurrence of a substring within a string. There is a  `strstr` function in <string.h> library that is commonly used in C programming for string manipulation. 

### Explanation
The `custom_strstr` function takes two input strings: the haystack and the needle. It searches for the needle within the haystack and returns a pointer to the first occurrence of the needle in the haystack. If the needle is not found, the function returns `NULL`.

#### Algorithm
1. Iterate through the haystack string.
2. For each character in the haystack, compare it with the first character of the needle.
3. If the characters match, compare subsequent characters of the haystack and needle until either the entire needle is matched or a mismatch is found.
4. If the entire needle is matched, return a pointer to the start of the match in the haystack.
5. If no match is found, continue searching through the haystack.
6. If the end of the haystack is reached without finding a match, return `NULL` to indicate that the needle is not present in the haystack.

### Example Input & Output:
```
Enter the haystack string: hello, world
Enter the needle string: world
'world' found at position 7
```

### Compile and Test:
```
gcc -o strstr -Wall -std=gnu99 strstr.c
```