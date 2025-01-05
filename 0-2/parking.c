#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    int n;
    int buff;
    int tot = 0;

    if(scanf("%d", &t) == 0){
        return 0;
    }
    
    for(int i = 0; i < t; i++){
        tot = 0;
        
        if(scanf("%d", &n) == 0){
        return 0;
        }
        
        int x[n];
        
        for(int i = 0; i < n; i++){
            if(scanf("%d", &x[i]) == 0){
                return 0;
            }
        }
        
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(x[j] > x[j+1]){
                    buff = x[j+1];
                    x[j+1] = x[j];
                    x[j] = buff;
                }
            }
        }
        
        for(int i = 0; i < n - 1; i++){
            if(x[i] < x[i+1]){
                tot += (x[i+1] - x[i]);
            }else{
                tot += (x[i] - x[i + 1]);
            }
        }
        
        if(x[0] < x[n-1]){
            tot += (x[n-1] - x[0]);
        }else{
            tot += (x[0] - x[n-1]);
        }
        
        printf("%d\n", tot);
    }
    
    return 0;
}