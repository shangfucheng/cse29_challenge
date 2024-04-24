#include <stdio.h>

int main(int argc, char *argv[])
{
        char alpa[27];
        int i;
        for (i = 0; i < sizeof(alpa); i++)
        {
                // DO NOT use bracket for alpa array. eg: alpa[i]
                *alpa = 'a' + i;
        }

        // the final output should be "abc......z" only
        printf("%s\n", alpa); // DO NOT modify this line
        return 0;
}
