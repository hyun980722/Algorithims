#include <stdio.h>

int main (){
    int n;
    printf("몇 단 삼각형입니까? : ");
    scanf("%d",&n);
    for(int i =0; i < n ; i++){
        for(int j =0 ;j <=i;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}