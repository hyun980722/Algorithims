/* 배열 요소의 최댓값을 구한다. (값을 난수로 생성)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n);

int main (){

    int *height;        /* 배열의 첫 번 째 요소의 포인터*/
    int number;         /* 사람 수 : 배열 height 의 요소의 개수*/
    printf("사람의 수 : ");
    scanf("%d",&number);
    height = calloc(number,sizeof(int));    /* 요소 개수 number개인 배열을 생성 */
    srand(time(NULL));      /* 시간으로 난수의 seed를 초기화*/
    for(int i = 0 ; i < number ; i++){
        height[i] = 100 + rand() % 90;      /* 100 ~ 189cm 난수 생성*/
        printf("height[%d] = %d\n",i,height[i]);
    }
    printf("최댓값은 %d입니다.\n",maxof(height,number));
    free(height);

    return 0;
}
/*--- 요소 개수가 n인 배열 a의 요소의 최댓값을 구한다. ---*/
int maxof(const int a[], int n){
    int max=a[0];
    for(int i = 0 ; i < n ; i++){
        if(max < a[i])
            max = a[i];     /* 최댓값 */
    }
    return max;
}