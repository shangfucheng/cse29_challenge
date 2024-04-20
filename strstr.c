#include <stdio.h>
#define MAX_INPUT 100   // Max input size
void remove_newline(char *str);

// Given a String haystack, find needle in haystack
// example: 
//		char* haystack = "good luck";
// 	    char* needle = "ood";
// 	    char* result = custom_strstr(haystack, needle)
// 	    result should point at the start of "ood" in haystack
// 	    which means result point to first 'o' in haystack
// 	    when print out result, you should get "ood luck"
// 	    Return NULL if can not find needle in haystack
// TODO Implement custom_strstr function
char* custom_strstr(char *haystack, char *needle) {
	// TODO: If needle is an empty string, return haystack
    
    
	// iterate through haystack until end of string 
    while (*haystack != '\0') {
		// TODO: Step1 Pointers point to haystack and needle
       
 
        // TODO: Step2 Loop through both strings until the characters match or the needle ends
        // Example: while(n not end && h not end && *n==*h){...}
        
        
        // TODO: Step3 If needle reached its end, it means a match is found
        
        
        //TODO: Step4 Move to the next character in haystack
		
    }
    
    return NULL; // Return NULL if no match is found
}

// DO NOT modify the main function
int main() {
    char haystack[MAX_INPUT], needle[MAX_INPUT];

    printf("Enter the haystack string: ");
    fgets(haystack, sizeof(haystack), stdin);
	remove_newline(haystack);
    
	printf("Enter the needle string: ");
    fgets(needle, sizeof(needle), stdin);
	remove_newline(needle);

    char *result = custom_strstr(haystack, needle);

    if (result != NULL) {
        printf("'%s' found at position %ld\n", needle, result - haystack);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
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
