#include <stdio.h>

int main (){

    int n;
    int sum = 0;
    do{
        printf("숫자를 입력하세요");
        scanf("%d",&n);
    }
    while(n<=0);
    for(int i = 1 ;i <= n ; i ++){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}