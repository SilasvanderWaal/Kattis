#include <stdio.h>
#include <math.h>

int main(){
    double area;
    double length;
    
    if(scanf("%lf", &area) == 0) {
        return 0;
    }
    
    length = (sqrt(area)) * 4;
    
    printf("%.15lf", length);
    
    return 0;
}