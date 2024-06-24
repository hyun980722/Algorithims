/* 배열 요소를 역순으로 정리*/
#include <stdio.h>
#include <stdlib.h>

/*--- type형 x와 y 값을 교환 ---*/
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

/*--- 요소 개수가 n인 배열 a의 요소를 역순으로 정렬 ---*/
void ary_reverse(int a[], int n);

int main(){
    int *x;     /* 배열의 첫 번째 요소에 대한 포인터 */
    int nx;     /* 배열 x의 요소의 개수*/

    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));        /* 요소 개수가 nx인 int형 배열 x를 생성*/
    for(int i = 0 ; i < nx ; i++){
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);     /* 배열 x의 요소를 역순으로 정렬*/
    printf("역순으로 정렬되었습니다.\n");
    for(int i = 0; i < nx; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);        /* 배열 x 를 해제*/
    return 0;
}
void ary_reverse(int a[], int n){
    for(int i = 0; i < n / 2; i++){
        swap(int, a[i], a[n - i - 1]);
    }
}