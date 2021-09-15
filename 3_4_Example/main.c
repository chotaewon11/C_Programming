#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	double x, y;

	printf("평면상의 좌표를 입력 : ");
	scanf("%lf,%lf", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1사분면 입니다 \n");
	}
	else if (x < 0 && y > 0)
	{
		printf("2사분면 입니다 \n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3사분면 입니다 \n");
	}
	else
	{
		printf("4사분면 입니다 \n");
	}


	return 0;
}