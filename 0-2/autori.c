#include <stdio.h>
#include <string.h>

#define LENGHT 100

int main(){
    char input[LENGHT];

    if(scanf("%s", input) != 1){
        
        return 1;
    }
    
    for(int i; i < strlen(input); i++)
    {
        if(input[i] > 64 && input[i] < 91)
        {
            printf("%c", input[i]);
        }
    }

    printf("\n");

    return 0;
}