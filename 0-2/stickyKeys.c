#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void removeLetter(char input[], int i);

int main(){
    int const MAXINPUT = 1000;
    
    char input[MAXINPUT];
        
    if( fgets(input, MAXINPUT, stdin) == 0){
        return 0;
    }
    
    for( int i = 0; i < strlen(input); i++){
        if ( input[i] == input[i + 1]){
            removeLetter(input, i);
            i -= 1;
        }
    }
    
    printf("%s", input);
}

void removeLetter(char input[], int i){
    for(int y = i; y < strlen(input); y++){
        input[y] = input[y + 1];
    }
}