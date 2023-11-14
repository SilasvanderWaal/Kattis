#include <stdio.h>
#include <string.h>
#define MAX 2100

int main(){
    char line1[MAX],line2[MAX], output[MAX *2];
    char *search = "|";
    
    fgets(line1, MAX,stdin);
    fgets(line2, MAX, stdin);

    for (int i = 0; i < strlen(line1); i++)
    {
        while (line1[i] != '|')
        {
        printf("%s", &line1[i]);
        }
    }
    
    return 0;
}