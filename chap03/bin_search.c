/* 이진 검색 */
#include <stdio.h>
#include <stdlib.h>

/*--- 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이진 검색 */
int binary_search(const int a[], int n, int key){
    int pl = 0;
    int pr = n -1;
    int pc;
    do{
        pc = (pl + pr)/2;
        if(a[pc] == key)
            return pc;          /* 검색 성공 */
        else if(a[pc] > key)
            pr = pc - 1;
        else
            pl = pc + 1;
    }while(pl <= pr);
    return -1;                  /* 검색 실패 */
}

int main (){
    int i, nx, ky, idx;
    int *x;             /* 배열의 첫번 째 요소에 대한 포인터 */
    puts("이진 검색");
    printf("요소의 개수 : ");
    scanf("%d",&nx);
    x = malloc(sizeof(int) * nx); /* 요소의 개수가 nx인 int 형 배열을 생성 */
    puts("오름차순으로 입력하세요");
    printf("x[0] : ");
    scanf("%d",x);
    for(i = 1 ; i < nx ; i++){
        do{
            printf("[%d] : ",i);
            scanf("%d",(x+i));
        }while(x[i] < x[i-1]);  /* 바로 앞 값보다 작으면 다시 입력 */
    }
    printf("검색 값 : ");
    scanf("%d",&ky);
    idx = binary_search(x,nx,ky);
    if(idx == -1) puts("검색에 실패했습니다.");
    else printf("%d는 x[%d]에 있습니다. \n",ky,idx);

    free(x);
}