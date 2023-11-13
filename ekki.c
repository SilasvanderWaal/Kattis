#include <stdio.h>
#include <string.h>

int main(){
    char line1[2100],line2[2100], output[4200];
    char *search = "|";
    char *tokl1;
    char *tokl2;
    char *tokl3;
    char *tokl4;
    
    scanf("%s %s", line1, line2);
    tokl1 = strtok(line1, search);
    tokl2 = strtok(NULL, search);
    tokl3 = strtok(line2,search);
    tokl4 = strtok(NULL, search);

    printf("%s%s %s%s\n", tokl1, tokl3, tokl2, tokl4);


    return 0;
}