#include <stdio.h>

int main()
{
    long long number1, number2;
    while (scanf("%lld %lld", &number1, &number2) == 2)
    {
        printf("%lld\n", number1 > number2 ? number1 - number2 : number2 - number1);
    }
    return 0;
}