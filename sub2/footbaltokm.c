#include <stdio.h>

int main(){
    int fb; 
    float km;

    scanf("%d", &fb);
    if(fb < 1 || fb > 100000){
        scanf("%d", &fb);
    }
    km = fb * 0.09144;
    printf("%f\n", km);

    return 0;
}