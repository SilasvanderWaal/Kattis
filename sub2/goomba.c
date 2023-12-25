#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    int gTot = 0;
    int bTot = 0;
    bool notPossible = false;
    
    if(scanf("%d", &n) == 0){
        return 0;
    }
    
    int g[n];
    int b[n];
    
    for(int i = 0; i < n; i++){
        if( scanf("%d %d", &g[i], &b[i]) == 0){
         return 0;   
        }
    }
    
    for(int i = 0; i < n; i++){
        gTot += g[i];
        
        if(gTot < b[i])
           notPossible = true;
    }
    
    if(notPossible == false){
        printf("possible");
    }else{
        printf("impossible");
    }
    
    return 0;
}