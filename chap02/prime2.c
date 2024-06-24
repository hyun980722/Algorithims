/* 1000 이하의 소수를 나열 (버전2)*/
#include <stdio.h>

int main(){
    int i,n;
    unsigned long counter = 0;  /* 나눗셈 횟수 */
    int ptr = 0;                /* 이미 얻은 소수의 개수 */
    int prime[500];             /* 소수를 저장하는 배열 */
    prime[ptr++] = 2;           /* 2는 소수 */
    for(n = 3 ; n <= 1000 ; n += 2){        /* 2를 제외한 짝수는 합성수이므로 홀수만을 대상으로 */
        for(i = 1 ; i < ptr ; i++){
            counter++;
            if(n % prime[i] == 0) break;    /* 소수로 나눠지는 수는 소수가 아니다. */
        }
        if(ptr == i) prime[ptr++] = n;      /* 소수의 값을 배열에 저장 */
    }
    for(i = 0 ; i < ptr ; i++)
        printf("%d\n", prime[i]);
    printf("나눗셈을 실행한 횟수 : %lu\n", counter);
    return 0;
}