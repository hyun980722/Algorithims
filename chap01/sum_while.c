#include <stdio.h>

int main (){
    int n, sum = 0;
    printf("정수를 입력하세요:");
    scanf("%d", &n);
    int i = 1;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    printf("%d\n",i);

    return 0;
}