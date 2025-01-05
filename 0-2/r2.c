#include <stdio.h>

int main(){
    int r1, r2, mean;

    if (scanf("%d %d", &r1, &mean) == 0)
    {
        return 0;
    }

    r2 = (mean * 2) - r1;

    printf("%d \n", r2);

    return 0;
}