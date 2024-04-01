#include <stdio.h>

int main (){

    int a,b,c;
    int max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
        (a>=c)? (max=a):(max=c);
    else
        (b>=c)? (max=b):(max=c);
    
    printf("%d\n",max);

    return 0;
}