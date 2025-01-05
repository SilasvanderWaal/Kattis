#include <stdio.h>
#define MAXJUNK 1000000000
#define MAXDAYS 100000

int main(){
    int days, junk[MAXDAYS], nmrJunk = MAXJUNK, bestDay = 0;

    if(scanf("%d", &days) == 0){
        return 0;
    }

    for (int i = 0; i < days; i++)
    {
        if(scanf("%d", &junk[i]) == 0)
        {
            return 0;
        }

        if(junk[i] < nmrJunk)
        {
            nmrJunk = junk[i];
            bestDay = i;
        }
    }

    printf("%d \n", bestDay);

    return 0;
}