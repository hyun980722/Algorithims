#include <stdio.h>
#include <stdlib.h>

/* 배열 b의 모든 요소를 역순으로 배열 a에 복사하는 함수 */
void ary_rcopy(int a[], const int b[], int n);

int main() {
    int n;
    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);
    
    /* 동적 배열 할당 */
    int *a = malloc(sizeof(int) * n);
    int *b = malloc(sizeof(int) * n);

    /* 입력 오류 체크 */
    if (a == NULL || b == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("b 배열의 %d 번째 요소: ", i);
        scanf("%d", &b[i]);
    }
    
    ary_rcopy(a, b, n);
    
    printf("배열 b의 모든 요소를 역순으로 배열 a로 복사했습니다.\n");
    for (int i = 0; i < n; i++) {
        printf("a 배열의 %d 번째 요소: %d\n", i, a[i]);
    }
    
    /* 동적 배열 메모리 해제 */
    free(b);
    free(a);
    
    return 0;
}

void ary_rcopy(int a[], const int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[n-i-1];
    }
}

