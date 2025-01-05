#include <stdio.h>

int main(){
    int testCases;
    int people;
    int totGrades;
    int average;
    int counter;
    float procent;
    
    if(scanf("%d", &testCases) == 0){
        return 0;   
    }
    
    for(int i = 0; i < testCases; i++){
        int totGrades = 0;
        counter = 0;
        
        if(scanf("%d", &people) == 0){
            return 0;
        }
        
        int grades[people];
        
        for(int i = 0; i < people; i++){
            if(scanf("%d", &grades[i]) == 0){
                return 0;
            }
            
            totGrades += grades[i];
        }
        
        average = totGrades / people;
        
        for(int i = 0; i < people; i++){
            if(grades[i] > average){
                counter++;
            }
        }
        
        procent = (counter / (float)people) * 100;
        
        printf("%.3f%%\n", procent);
    }
    
    return 0;
}