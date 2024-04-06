#include <stdio.h>

int main(){
    int hight, weight;
    printf("사각형을 출력합니다.\n");
    printf("높이 : ");
    scanf("%d",&hight);
    printf("너비 : ");
    scanf("%d",&weight);
    for(int i =0 ; i<hight;i++){
        for (int j = 0 ; j<weight;j++)
            printf("*");
        putchar('\n');
    }
    return 0;
}