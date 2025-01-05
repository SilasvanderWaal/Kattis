#include <stdio.h>

int main(){
    int testcases;
    int number;
    
    if(scanf("%d", &testcases) == 0){
        return 0;
    }
    
    for(int i = 0; i < testcases; i++){
        if(scanf("%d", &number) == 0){
            return 0;
        }
        
        if(number % 2 == 0){
            printf("%d is even\n", number);
        }else{
            printf("%d is odd\n", number);
        }
    }
    
    return 0;
}