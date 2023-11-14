#include <stdio.h>
#include <math.h>

int main(){
    int imp;
    int impYear;
    int currentYear;
    
    scanf("%d", &imp);
    if(imp < 0 || imp > 2000000000){
        scanf("%d", &imp);
    }
    
    scanf("%d", &impYear);
    if(impYear < 1 || impYear > 1000){
        scanf("%d", &impYear);
    }
    
    currentYear = 2022 + floor(imp / impYear);
    
    printf("%d \n", currentYear);
    return 0;
}