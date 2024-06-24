/* 배열 요소의 최댓 값을 구하는 코드*/
#include <stdio.h>
#include <stdlib.h>

/*--- 요소의 개수가 n인 배열 a의 요소의 최댓값을 구한다.---*/
int max_of(const int a[], int n){
    int max = a[0];     /* 최댓값을 저장하는 변수 */
    for(int i = 1 ; i < n ; i++){
        if(max < a[i]) max = a[i];
    }
    return max;
}
/*-- 요소의 개수가 n인 배열 a의 요소의 최솟 값을 구한다.-- */
int min_of(const int a[], int n){
    int min = a[0];     /* 최솟값을 저장하는 변수 */
    for(int i = 1 ; i < n ; i++){
        if(min > a[i]) min = a[i];
    }
    return min;
}
/*--- 요소의 개수가 n인 배열 a의 요소의 합계를 구한다.---*/
int sum_of(const int a[], int n){
    int sum = 0;    /* 합계를 저장하는 변수 */
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    return sum;
}
/*--- 요소의 개수가 n인 배열 a의 평균을 구하는 문제*/
double ave_of(const int a[], int n){
    double avg = 0;
    avg = (double)sum_of(a ,n) / n;
    return avg;
}
int main (){
    int *height;    /* 배열의 첫 번쨰 요소의 포인터 */
    int number;     /* 인원 = 배열 height의 요소 개수 */
    printf("사람 수 : ");
    scanf("%d",&number);
    height = calloc(number,sizeof(int));    /* 요소 개수 number개인 배열을 생성 */
    printf("%d 사람의 키를 입력하세요. \n",number);
    for(int i = 0 ; i < number ; i++){
        printf("height[%d] : ",i);
        scanf("%d",&height[i]);
    }
    printf("최댓값은 %d 입니다.\n ",max_of(height,number));
    printf("최솟값은 %d 입니다. \n",min_of(height,number));
    printf("합계는 %d 입니다.\n",sum_of(height,number));
    printf("평균은 %.2lf 입니다.\n",ave_of(height,number));
    free(height);
    return 0;
}