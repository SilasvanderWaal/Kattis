#include <stdio.h>

#define MAXSTRIPS 10
#define MAXTEST 20

int main(){
    int testCases, strips, outlets, totOutlets, answers[MAXTEST];

    if(scanf("%d", &testCases))

    for (int i = 0; i < testCases; i++)
    {
        if (scanf("%d", &strips) == 0)
        {
            return 0;
        }
        
        totOutlets = 0;

        for (int y = 0; y < strips; y++)
        {
            if (scanf("%d", &outlets) == 0)
            {
                return 0;
            }

            totOutlets += outlets;
        }

        //We have to remove one outlet for the next strip, except for the last one ofc.
       totOutlets = (totOutlets - strips) + 1;

        //Puts answers in a array so we can print them all at once.
       answers[i] = totOutlets;
    }

    for (int i = 0; i < testCases; i++)
    {
        printf("%d\n", answers[i]);
    }
    
    return 0;
}