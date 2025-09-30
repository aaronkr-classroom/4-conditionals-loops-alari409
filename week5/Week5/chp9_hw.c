//chp9_hw.c
//슬라이드 89 작성
//#include<stdio.h>
//
//void main()
//{
//	int m, n;
//	for (m = 5; m < 7; m++)
//	{
//		for (n = 0; n < 3; n++)
//		{
//			if (m == 5 && &n == 1) break;
//			if (n == 2)continue;
//			printf("m(%d)-n(%d) \n", m, n);
//		}
//	}
//}

/*m(5) - n(0)
m(5) - n(1)
m(6) - n(0)
m(6) - n(1)*/

# include<stdio.h>
void main()
{
	int step = 2, i;
	while (step <= 9)           // step이 2~9까지 반복
	{
		i = 1;                  // i를 1로 초기화
		while (i <= 9)          // i가 1~9까지 반복
		{
			printf("%d * %d = %d\n", step, i, step * i);
			i++;                // i를 1씩 증가
		}
		step++;                 // step을 1씩 증가
	}
}