#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* made by Cho tae
*/
int main(void)
{
	int count[6] = {0}; //������ �迭 ����
	int i,n,r;
	printf("�ֻ����� ��� �����ڽ��ϱ�?: ");
	scanf("%d", &n);
	
	srand(time(NULL)); //�ð��� ���� rand�Լ��� ������ ���� ����

	for ( i = 0; i < n; i++)
	{
		r = rand() % 6; //�������� 0~5���� ����
		count[r] = count[r]+1 ; 
	}
	for ( i = 0; i < 6; i++)
	{
		printf("<�ֻ��� ��> %d : <Ƚ��> %d ( Ȯ�� %.1lf %% )  \n", i + 1, count[i], ((double)count[i] / n) * 100);
	}
	return 0;
}