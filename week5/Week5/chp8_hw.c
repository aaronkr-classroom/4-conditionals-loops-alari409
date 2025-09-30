//chp8_hw.c
//Q1, Q2, Q3 작성하고 결과를 콘솔에서 표시하세요
#include <stdio.h>

void print_stars(int);
void q1(int);
void q2(int);
void q3(int);

int main(void)
{
	int result;
	printf("숫자를 입력하세요: "); scanf("%d", &result);
	if (result >= 0)
		printf("%d", result);
	else result = result * (-1);
	printf("양수 출력: %d", result);

	return 0;
}

