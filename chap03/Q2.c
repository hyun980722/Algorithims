/* 선형 검색(보초법) */
#include <stdio.h>
#include <stdlib.h>


/* --- 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색 (보초법) ---*/
int search (int a[], int n, int key){
    int i,j;
    a[n] = key;
    printf("   |");
    for(i = 0 ; i < n ; i++)
        printf("%4d",i);
    printf("\n---+");
    for(i = 0 ; i < n*4; i++)
        printf("-");
    printf("\n");
    for(i = 0;;i++){
        printf("   |");
        for(j = 0 ; j < n; j++){
            if(i == j) printf("   *");
            else printf("    ");
        }
        printf("\n");
        printf("  %d|",i);
        for(j = 0 ; j < n ; j++)
            printf("%4d",a[j]);
        printf("\n");
        if(a[i] == key) break;
    }
    return i == n ? -1 : i;
}

int main (){
    int i, nx, ky, idx;
    int *x;             /* 배열의 첫번 째 요소에 대한 포인터 */
    puts("선형 검색");
    printf("요소의 개수 : ");
    scanf("%d",&nx);
    x = malloc(sizeof(int) * (nx + 1)); /* 요소의 개수가 nx + 1인 int 형 배열을 생성 */
    for(i = 0 ; i < nx ; i++){
        printf("[%d] : ",i);
        scanf("%d",(x+i));
    }
    printf("검색 값 : ");
    scanf("%d",&ky);
    idx = search(x,nx,ky);
    if(idx == -1) puts("검색에 실패했습니다.");
    else printf("%d는 x[%d]에 있습니다. \n",ky,idx);

    free(x);
}