#include <stdio.h>

int main(){
    int n;
    do {
    printf("숫자를 입력하세요 : ");
    scanf("%d",&n);
    }while(n <= 0);
    int count = 1;
    while(1){
        if(n < 10) break;
        n = n/10;
        count++;
    }

    printf("%d자리수입니다.\n",count);

    return 0;
}