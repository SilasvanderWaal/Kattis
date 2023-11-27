#include <stdio.h>
#define DICE 4

int main(){
    int diceNumber = 0;
    int totGunnar, totEmma;

    for (int i = 0; i < DICE; i++)
    {
        scanf("%d", &diceNumber);
        totGunnar += diceNumber;
    }
    
    for (int i = 0; i < DICE; i++)
    {
        scanf("%d", &diceNumber);
        totEmma += diceNumber;
    }

    printf("%s \n", totGunnar > totEmma?"Gunnar":totGunnar == totEmma? "Tie":"Emma");

    return 0;
}