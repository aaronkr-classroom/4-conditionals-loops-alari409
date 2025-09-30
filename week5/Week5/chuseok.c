//chuseok.c
#include <stdio.h>

void print_calendar(int);

int main(void)
{

	int chuseok_mth = 10;
	int chuseok = 6;
	
	int this_mth = 9;
	int today = 30;

	//1. 조건문
	if (this_mth == chuseok_mth)
	{
		printf("chuseok is coming!");
	}
	else
	{
		printf("no chuseok yet");
	}


	//2. 반복문
	// 서식: for(시작점; 조건; 증/감;) {지시문;}

	for (int i = today; i < 31; i++)
	{
		printf("Today is %d월 %d일!", this_mth, today);
	}

	//달력 출력하기
	print_calendar(this_mth);

	return 0;
}

void print_calendar(int this_mth)
{
	//30 days has september, april, june, and november
//all the rest have 31, save february which is short 1.

	int short_mth = 2, //2월 =28이나 29일
		mid_mth_1 = 9,
		mid_mth_2 = 4,
		mid_mth_3 = 6,
		mid_mth_4 = 11,
		days;
	
	switch (this_mth) 
	{
	case 1:
	case 3:
	case 5: 
	case 7:
	case 8:
	case 10:
	case 12:
		days = 30; break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30; break;
	case 2:
		days = 28; break;
	default:
		printf("That's not a month!");
		return 0;
	}

	printf("\n***%d월 ***\n", this_mth);//제목
	int cols = 7;
	int rows = days / 7;

	for (int j = 1; j <= rows; j++)
	{
		for (int i = 1; i <=7; i++);
		{
			printf("%d\t", j);
		}
		printf("\n");
	}
}