#include <stdio.h>
void triagleLB(int n);
void triagleLU(int n);
void triagleRB(int n);
void triagleRU(int n);
int main (){
    int n;
    printf("몇 단 삼각형입니까? : ");
    scanf("%d",&n);
    triagleLB(n);
    triagleLU(n);
    triagleRB(n);
    triagleRU(n);

    return 0;
}

void triagleLB(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++)
            putchar('*');
        putchar('\n');
    }
}
void triagleLU(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++)
            putchar('*');
        putchar('\n');
    }
}
void triagleRB(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1 ; j++)
            putchar(' ');
        for(int j = 0 ; j <= i ; j++)
            putchar('*');
        putchar('\n');
    }
}
void triagleRU(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++)
            putchar(' ');
        for(int j = 0 ; j < n-i ; j++)
            putchar('*');
        putchar('\n');
    }
}