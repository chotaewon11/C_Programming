#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* made by Cho tae
*/
int main(void)
{
	int count[6] = {0}; //저장할 배열 선언
	int i,n,r;
	printf("주사위를 몇번 던지겠습니까?: ");
	scanf("%d", &n);
	
	srand(time(NULL)); //시간에 따라 rand함수가 랜덤한 값을 가짐

	for ( i = 0; i < n; i++)
	{
		r = rand() % 6; //랜덤으로 0~5값이 나옴
		count[r] = count[r]+1 ; 
	}
	for ( i = 0; i < 6; i++)
	{
		printf("<주사위 수> %d : <횟수> %d ( 확률 %.1lf %% )  \n", i + 1, count[i], ((double)count[i] / n) * 100);
	}
	return 0;
}