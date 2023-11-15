#include <stdio.h>
#include <string.h>
#define MAX 2100

int main(){
    char line1[MAX],line2[MAX];
    char *search = "|";
    int counter = 0;
    
    fgets(line1, MAX,stdin);
    fgets(line2, MAX, stdin);

    for (int i = 0; i < strlen(line1) - 1; i++)
    {
        
        if (line1[i] == '|')
        {

            for (int i = 0; i < strlen(line2); i++)
            {

                counter++;

                if(line2[i] == '|')
                {
                    printf(" ");
                    i = strlen(line2);
                }

                if(line2[i] != '|')
                {
                    printf("%c", line2[i]);
                }
            }
        }

        if(line1[i] != '|')
        {
        printf("%c", line1[i]);
        }
    }

    for (int i = counter; i < strlen(line2); i++)
    {
        printf("%c", line2[i]);
    }
    
    return 0;
}