#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	double x, y;

	printf("������ ��ǥ�� �Է� : ");
	scanf("%lf,%lf", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и� �Դϴ� \n");
	}
	else if (x < 0 && y > 0)
	{
		printf("2��и� �Դϴ� \n");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и� �Դϴ� \n");
	}
	else
	{
		printf("4��и� �Դϴ� \n");
	}


	return 0;
}