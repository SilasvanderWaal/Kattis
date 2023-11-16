#include <stdio.h>
#include <string.h>
#define MAX 2100

int main(){
    char line1[MAX],line2[MAX], answer[5000];
    int counter = 0;
    
    if (fgets(line1, MAX, stdin) == NULL) {
        // Handle error or end of file
        return 1;
    }

    if (fgets(line2, MAX, stdin) == NULL) {
        // Handle error or end of file
        return 1;
    }

    for (int i = 0; i < strlen(line1) - 1; i++)
    {
        if (line1[i] == '|')
        {
            for (int i = 0; i < strlen(line2); i++)
            {
                counter++;

                if(line2[i] == '|')
                {
                    strcat(answer, " ");
                    i = strlen(line2);
                }

                if(line2[i] != '|')
                {
                    char temp[2] = "\0";
                    temp[0] = line2[i];
                    strcat(answer, temp);
                }
            }
        }

        if(line1[i] != '|')
        {
        char temp[2] = "\0";
        temp[0] = line1[i];
        strcat(answer, temp);
        }
    }

    for (int i = counter; i < strlen(line2) -1; i++)
    {
        char temp[2] = "\0";
        temp[0] = line2[i];
        strcat(answer, temp);
    }
    
    printf("%s",answer);
    return 0;
}