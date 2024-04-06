#include <stdio.h>

void spria(int n);

int main (){
    int n;
    printf("숫자를 입력하세요 : ");
    scanf("%d",&n);
    spria(n);
    return 0;
}

void spria(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <n-i-1;j++)
            putchar(' ');
        for(int j = 0 ; j< 2*i+1;j++)
            putchar('*');
        putchar('\n');
    }
}