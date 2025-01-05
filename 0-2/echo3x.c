#include <stdio.h>

int main(){
    char str[15];

    if(scanf("%s", str) == 0){
        return 1;
    }

    printf("%s %s %s", str, str, str);

    return 0;
    
}