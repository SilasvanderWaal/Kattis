#include <stdio.h>

int main(){
    int hotels, distance[11];
    float odds;

    scanf("%d", &hotels);

    for ( int i = 0; i < hotels; i++)
    {
        scanf("%d", &distance[i]);

    switch (distance[i])
    {
        case 2:
        case 12: 
            odds += (float)1/36;
            break;
        
        case 3:
        case 11:
            odds += (float)2/36;
            break;
        case 4:
        case 10:
            odds += (float)3/36;
            break;
        case 5:
        case 9:
            odds += (float)4/36;
            break;
        case 6:
        case 8:
            odds += (float)5/36;
            break;
        case 7 :
            odds += (float)6/36;
            break;     
        default:
            break;
        }
    }
    printf("%f\n", odds);
    return 0;
}