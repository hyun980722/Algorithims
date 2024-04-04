#include <stdio.h>

int main(){
    int n , sum = 0;
    scanf("%d", &n);
    if((n%2)){
        sum = (n)/2 +1; 
    }
    sum = sum + (1 + n)*(n/2);
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    return 0;
}