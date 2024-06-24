#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*--- type 형의 x와 y의 값을 교환 ---*/
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*배열 a의 모든 요소의 순서를 뒤섞는 shuffle 함수*/
void shuffle(int a[], int n);
int main() {
    int n;
    printf("배열의 크기를 입력하세요: ");
    scanf("%d", &n);
    
    /* 동적 배열 할당 */
    int *a = malloc(sizeof(int) * n);
    /* 입력 오류 체크 */
    if (a == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("a 배열의 %d 번째 요소: ", i);
        scanf("%d", a+i);
    }
    
    shuffle(a, n);
    
    printf("배열 a를 무작위 순서로 섞었습니다.\n");
    for (int i = 0; i < n; i++) {
        printf("a 배열의 %d 번째 요소: %d\n", i, a[i]);
    }
    
    /* 동적 배열 메모리 해제 */
    free(a);
    
    return 0;
}

void shuffle(int a[], int n){

        srand(time(NULL));
        for(int i = 0 ; i < n ; i++){   
            int j = rand() % (i+1) ;
            if(i != j){
                swap(int, *(a+i),*(a+j));
            }
    }

}

