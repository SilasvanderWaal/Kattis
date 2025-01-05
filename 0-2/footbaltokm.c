#include <stdio.h>
#include <math.h>

int main(){
    double fb; 
    double km;

    if(scanf("%lf", &fb) == 0 || fb < 1 || fb > 100000){
        return 0;
    }

    km = fb * 0.09144;
    printf("%.5lf\n", km);

    return 0;
}