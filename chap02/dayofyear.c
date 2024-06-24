/* 한 해의 지난 날 수를 구한다. */
#include <stdio.h>

/*- 각 달의 날 수-*/
int mdays[][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                   {31,29,31,30,31,30,31,31,30,31,30,31}
};

/*-- 년이 윤년인지 검사-- */

int isleap(int year){
    return year % 4 ==0 && year % 100 != 0 || year % 400 == 0; 
}

/* -- y년 m월 d일의 그 해 지난 날 수를 구한다. --*/
int dayofyear(int y , int m, int d){
    int days = d;   /* 날 수 */
    for(int i = 1 ; i < m; i++){
        days += mdays[isleap(y)][i-1];
    }
    return days;
}
int main (){
    int year, month, day;       /* 년, 월, 일 변수*/
    int retry;                  /* 다시 진행할지 판단 플래그*/
    do{
        printf("년 : ");
        scanf("%d", &year);
        printf("월 : ");
        scanf("%d", &month);
        printf("일 : ");
        scanf("%d", &day);
        printf("%d년 %d일째입니다. \n",year,dayofyear(year,month,day));
        printf("다시할까요? 예 : 1 /아니오 : 0  ");
        scanf("%d",&retry);
    }while(retry == 1);

    return 0;
}
    