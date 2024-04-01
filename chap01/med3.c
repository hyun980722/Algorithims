#include <stdio.h>

int med(int a, int b, int c);

int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",med(a,b,c));
    return 0;
}

int med(int a, int b, int c){
    if(a>=b){
        if(c >= a)
            return a;
        else{
            if(c >= b)
                return c;
            else
                return b;
        }
    }else{
        if(c >= b)
            return b;
        else{
            if(c >= a)
                return c;
            else
                return a;
        }
    }
    
            
}