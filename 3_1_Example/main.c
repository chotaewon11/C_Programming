#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	int a = 0, b = 0, r = 0;
	char cal;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d%c%d", &a, &cal, &b);

	if (cal == '+')
	{
		r = a + b;
		printf("%d + %d = %d", a, b, r);
	}
	else if (cal == '-')
	{
		r = a - b;
		printf("%d - %d = %d", a, b, r);
	}
	else if (cal == '*')
	{
		r = a * b;
		printf("%d * %d = %d", a, b, r);
	}
	else if (cal == '/')
	{
		r = a / b;
		printf("%d / %d = %d", a, b, r);
	}
	else
	{
	}
	return 0;
}