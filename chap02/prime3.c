/* 1000 이하의 소수를 나열 (버전3)*/
#include <stdio.h>

int main(){
    int i,n;
    unsigned long counter = 0;  /* 나눗셈 횟수 */
    int prime[500];             /* 소수를 저장하는 배열 */
    prime[0] = 2;               /* 2는 소수 */
    prime[1] = 3;               /* 3는 소수 */
    int ptr = 2;                /* 이미 얻은 소수의 개수 */
    for(n = 5 ; n <= 1000 ; n += 2){        /* 2를 제외한 짝수는 합성수이므로 홀수만을 대상으로 */
        int flag = 0;
        for(i = 1 ;counter++, prime[i] * prime[i] <= n ; i++){
            counter++;
            if(n % prime[i] == 0){ /* 소수로 나눠지는 수는 소수가 아니다. */
                flag = 1;
                break;              /* 더이상의 반복 필요 x */
            }
        }
        if(!flag){
            prime[ptr++] = n; /* 소수의 값을 배열에 저장 */
        }    
    }
    for(i = 0 ; i < ptr ; i++)
        printf("%d\n", prime[i]);
    printf("나눗셈을 실행한 횟수 : %lu\n", counter);
    return 0;
}