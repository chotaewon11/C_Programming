#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	int a = 0, b = 0;

	printf("정수를 입력하시오. : ");
	scanf("%d,%d", &a, &b);

	if (a > b)
	{
		if ((a%b) == 0)
		{
			printf("%d는 %d의 약수가 맞습니다. \n",a,b);
		}
		else
		{
			printf("%d는 %d의 약수가 아닙니다. \n", a, b);
		}
	}
	else
	{
		printf("나눌수가 없습니다!");
	}
	return 0;
}