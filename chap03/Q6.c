/* bsearch 함수를 사용해 내림차순으로 정렬된 배열을 검색 */
#include <stdio.h>
#include <stdlib.h>

/* 실수형를 비교하는 함수(내림차순)*/
int long_cmpr(const long *a, const long *b)
{
    if(*a < *b)
        return 1;
    else if(*a == *b)
        return 0;
    else
        return -1;
}

int main (){

    int i,nx,key;
    long *x;             /* 배열의 첫 번째 요소에 대한 포인터 */
    long *p;             /* 검색한 요소에 대한 포인터 */
    puts("bsearch 함수를 사용하여 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = malloc(sizeof(long) * nx);

    puts("내림차순으로 입력하세요");
    printf("x[0] : ");
    scanf("%d",&x[0]);
    for(i = 1 ; i < nx ; i++){
        do{
            printf("x[%d] : ",i);
            scanf("%d", &x[i]);
        }while(x[i] > x[i-1]);
    }
    printf("검색 값 : ");
    scanf("%d",&key);
    p = bsearch(&key,                                       /* 검색값에 대한 포인터 */
                x,                                          /* 배열 */
                nx,                                         /* 요소의 개수 */
                sizeof(int),                                /* 요소의 크기 */
                (int(*)(const void *,const void *)) long_cmpr/* 비교 함수 */
                );
    if(p == NULL)
        puts("검색에 실패하셨습니다.");
    else
        printf("%d은 x[%d] 에 있습니다. \n",key,(int)(p-x));
    free(x);

    return 0;
}