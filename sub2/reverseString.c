#include <string.h>
#include <stdio.h>

void revstr(char*str){
    int i, len, temp;
    len = strlen(str);

    for(i = 0; i < len/2;i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main(){
    char str[1000];

    scanf("%s", str);
    revstr(str);
    printf("%s\n", str);
    return 0;
}