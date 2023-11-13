#include <stdio.h>

int addList(int classrooms){
    int x[classrooms];
    int tot;

    for(int i=0 ; i < classrooms; i++ ){
        scanf("%d", &x[i]);
        tot += x[i];
    }

    return tot;
}

int main(){
    int classrooms, bottles, tot;

    scanf("%d %d", &classrooms , &bottles);

    tot = addList(classrooms);

    
    if(tot <= bottles){
        printf("Jebb\n");
    }else{
        printf("Neibb\n");
    }
    return 0;
}
