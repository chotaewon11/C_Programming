#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	int a = 0, b = 0;

	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d,%d", &a, &b);

	if (a > b)
	{
		if ((a%b) == 0)
		{
			printf("%d�� %d�� ����� �½��ϴ�. \n",a,b);
		}
		else
		{
			printf("%d�� %d�� ����� �ƴմϴ�. \n", a, b);
		}
	}
	else
	{
		printf("�������� �����ϴ�!");
	}
	return 0;
}