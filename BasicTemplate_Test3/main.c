#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	double bmi, a, b;
	
	printf("������(kg) : ");
	scanf("%lf",&a);

	printf("Ű(cm) �Է� : ");
	scanf("%lf",&b);

	bmi = a / (b * b) * 10000;
	//å ������ ����غ��� bmi������ ������ ���� 10000�� ���ؾ��մϴ�.

	if (bmi >= 20.0 && bmi <=25.0) 
	{
		printf("�����Դϴ�. \n");
	}
	else
	{
		printf("�������Դϴ�. \n");
	}
	return 0;
}