#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	int num;
	int i,j;
	int ent = 0;

	printf("2 �̻��� ���� �Է� : ");
	scanf("%d", &num);

	for(i = 2; i <= num ; i++) // 2���� num������ �ݺ�
	{
		for (j = 2; j <= i; j++) // 2���� i������ �ݺ�
		{
			if ((i%j) == 0)  // ������ ���� 0�̸�
			{
				if (i > j)    
				{
					break;
				}
				else
				{
					printf(" %d ",i);

					ent++;
					if((ent % 5) == 0) // ent ���� 5�� ���������� �������� ������ ���� �� �ѱ��
					printf("\n");
				}
			}
		}
	}
	return 0;
}