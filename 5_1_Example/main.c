#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/

int rec_func(int n); //�Լ� ����

int main(void)
{
	int res = 0;

	res = rec_func(1); 
	printf("result : %d \n", res);

	return 0;
}

int rec_func(int n) //���ȣ�� �Լ� ����
{
	if (n == 10)
	{
		return 10;  //10�϶� ������    
	}
	return n + rec_func(n + 1);
}
