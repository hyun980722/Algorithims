/*1000 이하의 소수를 나열한다. 버전1*/
#include <stdio.h>

int main (){
    int n,i;
    unsigned long counter = 0; /* 나눗셈 횟수 */
    for(n = 2; n <= 1000 ; n++){
        for(i = 2; i < n ; i++){
            counter++;
            if(n % i == 0) break;   /* 나누어떨어지면 소수가 아님 */
        }
        if(n==i)printf("%d\n", n); /* 소수이다. */
    }
    printf("나눗셈을 실행한 횟수 : %lu\n", counter);

    return 0;

}