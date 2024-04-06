#include <stdio.h>

int sumof(int a, int b);

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n",sumof(a,b));
    return 0;
}
int sumof(int a, int b){
    int max, min;
    int sum = 0;
    if(a > b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    
    for(int i = min ; i <=max ; i++){
        sum += i;
    }
    return sum;
}