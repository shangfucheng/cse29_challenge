#include <stdio.h>
#define MAX_INPUT 100   // Max input size
void remove_newline(char *str);

// Given a String target_str, find word_to_find in target_str
// example: 
//		char* target_str = "How is CSE29?";
// 	    char* word_to_find = "is";
// 	    char* result = word_finder(target_str, word_to_find)
// 	    result should be a pointer point at the start of "is" in target_str
// 	    when print out result, you should get "is CSE29?"
// 	    Return NULL if can not find word_to_find in target_str

// TODO: Implement word_finder function that achieve the above functionality
char* word_finder(char *target_str, char *word_to_find) {
	
    
    return NULL; // Return NULL if no match is found
}


// DO NOT modify the main function
int main(int argc, char* argv[]) {
	// target_str is user input from terminal
    char target_str[MAX_INPUT];
	// the word to look for in target_str
	char* word_to_find = "29";

	// get user input string
    printf("Enter the target_str: ");
    fgets(target_str, sizeof(target_str), stdin);
	// remove the trailing new line character
	remove_newline(target_str);
    
	// call word_finder function, return the pointer to the 
	// word_to_find in target_str if found, NULL otherwise
    char *result = word_finder(target_str, word_to_find);
	
	// print result to terminal
    if (result != NULL) {
        printf("'%s' found at position %ld\n", word_to_find, result - target_str);
    } else {
        printf("'%s' not found in '%s'\n", word_to_find, target_str);
    }

    return 0;
}


// helper function to parse out new line from input, DO NOT modify
void remove_newline(char *str) {
    while (*str != '\0') {
        if (*str == '\n') {
            *str = '\0';
            return;
        }
        str++; 
    }
}
