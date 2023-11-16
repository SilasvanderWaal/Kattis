#include <stdio.h>

#define MAX 10000

int main(){
    int n, numbers[MAX * 3], counter = 0;

    //Geting # cases
    if(scanf("%d", &n) == 0 || n < 1 || n > MAX)
    {
        return 0;
    }

    //Filling the array with numbers
    for (int i = 0; i < n * 3; i++)
    {
        do
        {
            if(scanf("%d", &numbers[i]) == 0)
            {
                return 1;
            }
        } while(numbers[i] < 1  || numbers[i] > MAX);
        counter++;
    }

    //Looping over every third number in the array
    for (int i = 2; i < counter; i+=3)
    {
            //Checking if the first 2 numbers can be used to created the third
            if(numbers[i] == numbers[i-2] * numbers[i-1])
            {
                printf("Possible\n");
            }
            else if((float)numbers[i] == (float)numbers[i-2] / (float)numbers[i-1] || (float)numbers[i] == (float)numbers[i-1] / (float)numbers[i-2])
            {
                printf("Possible\n");
            }
            else if(numbers[i] == numbers[i-2] + numbers[i-1])
            {
                printf("Possible\n");
            }
            else if(numbers[i] == numbers[i-2] - numbers[i-1] || numbers[i] == numbers[i-1] - numbers[i-2])
            {
                printf("Possible\n");
            }
            else
            {
                printf("Impossible\n");
            }
    }

    return 0;
}

