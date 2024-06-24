#include <stdio.h>
#include <stdlib.h>

int main (){

    int i;
    int *a; //배열의 첫번쨰 요소의 포인터
    int na; // 배열 a의 요소의 개수
    printf("요소의 개수 : ");
    scanf("%d",&na);
    a = calloc(na,sizeof(int));  //요소가 na 개의 크기가 int인 배열을 생성
    
    if(a == NULL)
        puts("메모리 확보에 실패했습니다.");
    else{
        printf("%d개의 정수를 입력하세요.\n",na);
        for(int i = 0 ; i< na ; i++){
            printf("a[%d] : ", i);
            scanf("%d",&a[i]);
        }
        puts("각 요소값은 아래와 같습니다.");
        for(int i = 0 ; i < na ; i++){
            printf("a[%d] : %d \n", i , a[i]);
        }
        free(a);
    }

    return 0;
}