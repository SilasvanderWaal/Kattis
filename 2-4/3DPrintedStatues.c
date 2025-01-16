#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number;
    int printers = 1;
    int statues = 0;
    int dayCoutner = 0;
    if (!scanf("%d", &number))
    {
        return 0;
    }

    while (statues < number)
    {
        if (printers * 2 > number)
            statues += printers;
        else
            printers *= 2;
        dayCoutner++;
    }

    printf("%d", dayCoutner);
    return 0;
}