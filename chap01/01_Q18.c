#include <stdio.h>

void nrpira(int n);

int main(){
    int n;
    printf("숫자를 입력하세요 : ");
    scanf("%d",&n);
    nrpira(n);
    return 0;
}

void nrpira(int n){
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++)
            putchar(' ');
        for (int j = 0 ; j < 2*(n-i-1) +1; j++)
            printf("%d",i+1);
        putchar('\n');
    }
}

