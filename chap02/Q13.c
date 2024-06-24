/* 한 해의 지난 날 수를 구한다. */
#include <stdio.h>
typedef struct{
    int y;  /* 년 */
    int m;  /* 월 */
    int d;  /* 일 */
} Date;

Date Before(Date x, int n);
Date After(Date x, int n);

/*- 각 달의 날 수-*/
int mdays[][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                   {31,29,31,30,31,30,31,31,30,31,30,31}
};

/*-- 년이 윤년인지 검사-- */

int isleap(int year){
    return year % 4 ==0 && year % 100 != 0 || year % 400 == 0; 
}
/*구조체로 변환*/
Date DateOf(int y,int m,int d){
    Date temp;
    temp.y = y;
    temp.m = m;
    temp.d = d;

    return temp;
}

/* -- y년 m월 d일의 그 해 지난 날 수를 구한다. --*/
int dayofyear(int y , int m, int d){
    while(--m){
        d += mdays[isleap(y)][m-1];
    }
    return d;
}
/*--- 날짜 x의 n 일 뒤의 날짜를 반환 ---*/
Date After(Date x, int n)
{
	if (n < 0)
		return Before(x, -n);

	x.d += n;

	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
		x.d -= mdays[isleap(x.y)][x.m - 1];
		if (++x.m > 12) {
			x.y++;
			x.m = 1;
		}
	}
	return x;
}

/*--- 날짜 x의 n일 앞의 날짜를 반환 ---*/
Date Before(Date x, int n)
{
	if (n < 0)
		return After(x, -n);

	x.d -= n;

	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += mdays[isleap(x.y)][x.m - 1];
	}

	return x;
}
/*--- 날짜를 출력합니다. ---*/
int Print(Date x)
{
	int y = x.y;
	int m = x.m;
	int d = x.d;

	char * ws[] = { "일", "월" "화" "수", "목", "금", "토" };
	if (m == 1 || m == 2) {
		y--;
		m += 12;
	}
	printf("%04d년 %02d월 %02d일(%s)", x.y, x.m, x.d, ws[(y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7]);
}
int main (){
    Date x;
    int y,m,d,n;
    int retry;                  /* 다시 진행할지 판단 플래그*/
    do{
        printf("년 : ");
        scanf("%d", &y);
        printf("월 : ");
        scanf("%d", &m);
        printf("일 : ");
        scanf("%d", &d);
        printf("%d년 %d일째입니다. \n",y,dayofyear(y,m,d));

        x = DateOf(y, m, d);

        printf("며칠 앞 / 뒤의 날짜를 구할까요? : ");
        scanf("%d", &n);

        printf("%d 일 뒤의 날짜 : ", n); Print(After(x, n)); putchar('\n');
        printf("%d 일 앞의 날짜 : ", n); Print(Before(x, n)); putchar('\n');
        printf("다시할까요? 예 : 1 /아니오 : 0  ");
        scanf("%d",&retry);
    }while(retry == 1);

    return 0;
}
    