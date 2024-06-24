#include <stdio.h>

int main (){
    int a[5] = {1,2,3,4,5};
    int na = sizeof(a)/sizeof(int);
    for(int i = 0; i < na ; i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
    return 0;
}