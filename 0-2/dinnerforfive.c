#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int const arraysize = 4;
    
    int line1[arraysize];
    int line2[arraysize];
    int line3[arraysize];
    int line4[arraysize];
    int line5[arraysize];
    int line1Tot = 0;
    int line2Tot = 0;
    int line3Tot = 0;
    int line4Tot = 0;
    int line5Tot = 0;
    

        if(scanf("%d %d %d %d", &line1[0], &line1[1], &line1[2], &line1[3]) == 0){
            return 0;
        }

        if(scanf("%d %d %d %d", &line2[0], &line2[1], &line2[2], &line2[3]) == 0){
            return 0;
        }

    
        if(scanf("%d %d %d %d", &line3[0], &line3[1], &line3[2], &line3[3]) == 0){
            return 0;
        }

        if(scanf("%d %d %d %d", &line4[0], &line4[1], &line4[2], &line4[3]) == 0){
            return 0;
        }
    

        if(scanf("%d %d %d %d", &line5[0], &line5[1], &line5[2], &line5[3]) == 0){
            return 0;
        }

    
    for(int i = 0; i < arraysize; i++){
        line1Tot += line1[i];
        line2Tot += line2[i];
        line3Tot += line3[i];
        line4Tot += line4[i];
        line5Tot += line5[i];
    }
    
    if(line1Tot > line2Tot && line1Tot > line3Tot && line1Tot > line4Tot && line1Tot > line5Tot){
        printf("1 %d", line1Tot);
    }

   if(line2Tot > line1Tot && line2Tot > line3Tot && line2Tot > line4Tot && line2Tot > line5Tot){
        printf("2 %d", line2Tot);
    }

   if(line3Tot > line2Tot && line3Tot > line1Tot && line3Tot > line4Tot && line3Tot > line5Tot){
        printf("3 %d", line3Tot);
    }

   if(line4Tot > line2Tot && line4Tot > line3Tot && line4Tot > line1Tot && line4Tot > line5Tot){
        printf("4 %d", line4Tot);
    }
    
   if(line5Tot > line2Tot && line5Tot > line3Tot && line5Tot > line4Tot && line5Tot > line1Tot){
        printf("5 %d", line5Tot);
    }
    
    return 0;
}