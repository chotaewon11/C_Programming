#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	int a;
	int i;
	int res;
	int fir = 0;
	int sec = 1;
	printf("몇 번째 항까지 출력할까요? : ");
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		printf(" %d ,", fir);
		res = fir + sec; 
		fir = sec;
		sec = res;
	}
	return 0;
}