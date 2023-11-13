#include <stdio.h>

int main(){
    int n;
    int count;
    char word[10][100];
    //How many inputs
    scanf("%d", &n);
    count = n;
    //Getting the inputs
    for ( n = 0; n < count; n++)
    {
        scanf("%s", word[n]);
    }
    //printing the odd strings from the array
    for (int i=0; i < count; i +=2){
    printf("%s\n", word[i]);
    }
    return 0;
}