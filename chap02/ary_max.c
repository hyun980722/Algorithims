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
    free(height);
    return 0;
}