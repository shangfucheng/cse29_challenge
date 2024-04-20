#include <stdio.h>

int main(int argc, char *argv[]){
        char alpa[27];
        int i;
        for (i = 0; i < sizeof(alpa); i++){
                // do not use index based iteration for the alpa array
                *alpa = 'a' + i;
                *alpa += sizeof(char);
                printf("alpa[%d] = %c\n", i, alpa[i]);
        }
        // the final output should be "abc......z" only
        printf("%s\n", alpa);
        return 0;
}
