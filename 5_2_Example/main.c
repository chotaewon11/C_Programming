#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
void line(); //라인함수

int useFor(int a, int b);

int useRec(int a,int b);



int main(void)
{
	int resfor;
	int resrec;
	int a,b;

	printf(" aCb (a값,b값을 입력) : ");
	scanf("%d,%d",&a,&b);
	
	resfor = useFor(a,b);  //함수 호출
	resrec = useRec(a,b);  //함수 호출
	line();
	printf("반복문 활용 시 : %d \n", resfor);
	line();
	printf("재귀함수 활용 시 : % d \n", resrec);
	line();
	
	return 0;
}

int useFor(int a, int b) //반복문
{
	int resup = 1;
	int resdown = 1;
	int res = 1;
	int i, j;

	for (i = a-b+1; i <= a; i++) //a-b+1에서 a까지 
	{
		resup *= i; //resup에 i를 곱한 후 다시 대입
	}
	for (j = 1; j <= b; j++)  //1에서 b까지 
	{
		resdown *= j; //resdown에 j를 곱한 후 다시 대입
	}
	res = resup / resdown;
	 
	return res;
}


int useRec(int a,int b)
{
	if ((a == b || b == 0))
	{
		return 1;
	}
	else 
		return useRec(a - 1, b - 1) + useRec(a - 1, b);
}

void line()
{
	printf("------------------------------------\n");
}