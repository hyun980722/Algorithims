#include <stdio.h>


int main(){
    
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    
    if(n > 0)
        printf("양수입니다.\n");
    else if(n < 0)
        printf("음수입니다.\n");
    else
        printf("0입니다.\n");
    

    return 0;
}