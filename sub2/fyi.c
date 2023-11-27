#include <stdio.h>

int main(){
    int number;
    int true = 1;
    int false = 0;

    if(scanf("%d", &number)== 0)
    {
        return 0;
    }

    if(number > 5549999 && number < 5560000)
    {
        printf("%d", true);
    }else
    {
        printf("%d", false);
    }

    return 0;
}