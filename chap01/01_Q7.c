#include <stdio.h>

int main(){

    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1 ; i <n ; i++){
        printf("%d + ", i);
        sum += i;
    }
    printf("%d = %d \n", n , sum + n);
    return 0;
}