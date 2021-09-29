#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/

int rec_func(int n); //함수 선언

int main(void)
{
	int res = 0;

	res = rec_func(1); 
	printf("result : %d \n", res);

	return 0;
}

int rec_func(int n) //재귀호출 함수 정의
{
	if (n == 10)
	{
		return 10;  //10일때 끝내기    
	}
	return n + rec_func(n + 1);
}
