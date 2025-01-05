#include <stdio.h>

int main(){
    int number, digit, total, temp;

    if(scanf("%d", &number) == 0)
    {
        return 0;
    }
    
 /*   do{
        temp = number;
        total = 0;
        digit = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            total += digit;
            temp /= 10;
        }

        if(number % total != 0)
        {
            number++;
        }        

    }while(number % total != 0);
*/
    for (int i = number; i == number; i++)
    {
        temp = number;
        total = 0;
        digit = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            total += digit;
            temp /= 10;
        }

        if(number % total != 0)
        {
            number++;
        }        

    }

    printf("%d", number);
    
    return 0;
}