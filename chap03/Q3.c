/* Q3 */
#include <stdio.h>
#include <stdlib.h>

int search_idx (const int a[], int n, int key, int idx[]);

int main(){
    int nx, i, key, result;
    int* x , *d;
    printf("요소의 개수를 입력 : ");
    scanf("%d",&nx);
    x = malloc(sizeof(int)* nx);
    d = malloc(sizeof(int)* nx);

    if (x == NULL || d == NULL) {
        printf("메모리 할당 오류\n");
        free(x);
        free(d);
        return 1;
    }

    for(i = 0 ; i < nx ; i++){
        printf("x[%d] : ",i);
        scanf("%d",(x+i));
    }
    printf("검색할 키를 입력 : ");
    scanf("%d", &key);

    result = search_idx(x,nx,key,d);

    for(i = 0 ; i < result ; i++){
        printf("idx[%d] : %d\n",i,*(d+i));
    }
    free(x);
    free(d);

    return 0;
}
int search_idx (const int a[], int n, int key, int idx[]){
    int i, count;
    count = 0;
    for(i = 0; i < n; i++){
        if(a[i] == key){
            idx[count] = i;
            count++;
        }
    }
    return count;
}