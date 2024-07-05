/*같은 값을 갖는 요소의 맨 앞을 찾는 검색*/
#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key);

int main(){
    int i, nx,key,idx;
    int *x;
    printf("배열의 크기를 입력하세요 : ");
    scanf("%d",&nx);
    x = malloc(sizeof(int)*nx);
    printf("x[0] : ");
    scanf("%d",x);
    for(i = 1 ; i < nx ; i++){
        do{
            printf("x[%d] : ",i);
            scanf("%d",&x[i]);

        }while(x[i]< x[i-1]);
    }
    printf("검색할 값을 입력하세요 : ");
    scanf("%d",&key);
    idx = bin_search2(x,nx,key);
    if(idx == -1) puts("검색에 실패했습니다.");
    else printf("%d는 x[%d]에 있습니다. \n",key,idx);
    free(x);
}
int bin_search2(const int a[], int n, int key){
    int pl = 0;
    int pr = n-1;
    int pc;
    do{
        pc = (pl + pr)/2;
        if(key == a[pc]){       /* 검색 성공 */
             while (pc > 0 && a[pc - 1] == key) {
                pc--;
            }
            return pc;
        }
        else if(key < a[pc])
            pr = pc - 1;
        else
            pl = pc + 1; 

    }while(pl <= pr);
    return -1;      /* 검색 실패 */
}