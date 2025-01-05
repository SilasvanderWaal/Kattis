#include <stdio.h>
#include <string.h>

int main(){
    int const MAXSIZE = 999;
    
    char doktorLine[MAXSIZE];
    char userLine[MAXSIZE];
    
    fgets(userLine, MAXSIZE, stdin);
    fgets(doktorLine, MAXSIZE, stdin);
    
    if(strlen(userLine) >= strlen(doktorLine)){
            printf("go");
    }else{
            printf("no");
    }
    
    return 0;
}