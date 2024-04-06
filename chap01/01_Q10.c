#include <stdio.h>

int main (){
    int a,b;
    printf("a의 값 : ");
    scanf("%d",&a);
    do{
        printf("b의 값 : ");
        scanf("%d",&b);
        printf("a보다 더 큰 값을 입력하세요\n");
    }while(a>=b);

    printf("b-a는 %d 입니다.\n",b-a);

    return 0;
}