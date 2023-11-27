#include <stdio.h>

int main(){
    int current, correct, change;

    if (scanf("%d %d", &current, &correct) == 0)
    {
        return 0;
    }

    change = ((correct + 360) - current) % 360;

    if(change > 180)
    {
        change -= 360;
    }
    
    printf("%d", change);

    return 0;
}