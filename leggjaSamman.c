#include <stdio.h>

int main(){
    int arnar;
    int hannes;
    int together;
    
    printf("How many cars did Arnar park?\n");
    scanf("%d", &arnar);
    if(arnar < 2 || arnar > 1000){
        printf("You are lying! You can not have parked less than 2 or more than 1000! Put in the real number!\n");
        scanf("%d", &arnar);
    }

    printf("How many cars did Hannes park?\n");
    scanf("%d", &hannes);
    if(hannes < 2 || hannes > 1000){
        printf("You are lying! You can not have parked less than 2 or more than 1000! Put in the real number!\n");
        scanf("%d", &hannes);
    }

    together = hannes + arnar;
    printf("Arnar and Hannes parked %d cars together.\n", together);
    return 0;
}