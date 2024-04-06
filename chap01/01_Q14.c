#include <stdio.h>

int main(){
    int n;
    printf("사각형을 출력합니다.\n입력할 수 : ");
    scanf("%d",&n);
    for(int i =0 ; i<n;i++){
        for (int j = 0 ; j<n;j++)
            printf("*");
        putchar('\n');
    }
    return 0;
}