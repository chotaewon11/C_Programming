#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
void line(); //�����Լ�

int useFor(int a, int b);

int useRec(int a,int b);



int main(void)
{
	int resfor;
	int resrec;
	int a,b;

	printf(" aCb (a��,b���� �Է�) : ");
	scanf("%d,%d",&a,&b);
	
	resfor = useFor(a,b);  //�Լ� ȣ��
	resrec = useRec(a,b);  //�Լ� ȣ��
	line();
	printf("�ݺ��� Ȱ�� �� : %d \n", resfor);
	line();
	printf("����Լ� Ȱ�� �� : % d \n", resrec);
	line();
	
	return 0;
}

int useFor(int a, int b) //�ݺ���
{
	int resup = 1;
	int resdown = 1;
	int res = 1;
	int i, j;

	for (i = a-b+1; i <= a; i++) //a-b+1���� a���� 
	{
		resup *= i; //resup�� i�� ���� �� �ٽ� ����
	}
	for (j = 1; j <= b; j++)  //1���� b���� 
	{
		resdown *= j; //resdown�� j�� ���� �� �ٽ� ����
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