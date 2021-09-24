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

	printf("2 이상의 정수 입력 : ");
	scanf("%d", &num);

	for(i = 2; i <= num ; i++) // 2부터 num값까지 반복
	{
		for (j = 2; j <= i; j++) // 2부터 i값까지 반복
		{
			if ((i%j) == 0)  // 나머지 값이 0이면
			{
				if (i > j)    
				{
					break;
				}
				else
				{
					printf(" %d ",i);

					ent++;
					if((ent % 5) == 0) // ent 값이 5로 나누어져서 나머지가 없으면 다음 줄 넘기기
					printf("\n");
				}
			}
		}
	}
	return 0;
}