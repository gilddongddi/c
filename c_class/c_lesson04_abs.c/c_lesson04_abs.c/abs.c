//실습2. 키보드에서 입력받은 정수의 절대값 출력(abs.c)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("절대값은 %d입니다. \n", number);

	return 0;

	
}