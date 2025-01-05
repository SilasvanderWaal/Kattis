#include <stdio.h>

int main(){
    int x;
    int y;
    int n;
    
    if(scanf("%d %d %d", &x, &y , &n) == 0){
        return 0;
    }
    
    for(int i = 1; i <= n; i++){
        if(i % x == 0 && i % y != 0){
            printf("Fizz\n");
        }else if(i % y == 0 && i % x != 0 ){
            printf("Buzz\n");
        }else if(i % x == 0 && i % y == 0){
            printf("FizzBuzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
    
    return 0;
}