#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    if(n <1 || n > 1000){
        scanf("%d", &n);
    }

    if(n %2 == 0){
        printf("second\n");
    }else{
        printf("first\n");
    }
    return 0;
}