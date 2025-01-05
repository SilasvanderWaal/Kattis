#include <stdio.h>

int main(){
    int n;
    char sounds[10000][10];

    scanf("%d", &n);

    for(int i=0; i < n ; i++){
    scanf("%s", sounds[i]);
    }

    for(int i=0; i < n; i++){
        printf("%s", sounds[i]);
    }

    ///stuck, can not figure out how to code this assigment, https://open.kattis.com/problems/keylogger
}