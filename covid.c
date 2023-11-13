#include <stdio.h>
#include <string.h>

int main(){
    char DNA[1000];

    scanf("%s", DNA);

    if(strstr(DNA, "COV") != NULL){
        printf("Veikur!\n");
    }else{
        printf("Ekki veikur!\n");
    }
    return 0;
}