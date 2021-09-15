#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
#define Jan 1
#define Feb 2
#define Mar 3
#define Apr 4
#define May 5
#define Jun 6
#define Jul 7
#define Aug 8
#define Sept 9
#define Oct 10
#define Nov 11
#define Dec 12

int main(void)
{
	int a;

	printf("몇월인가요(정수로 입력)?: ");
	scanf("%d", &a);

	switch (a)
	{
	case Jan:
	{
		printf("January \n");
		break;
	}
	case Feb:
	{
		printf("February \n");
		break;
	}
	case Mar:
	{
		printf("March \n");
		break;
	}
	case Apr:
	{
		printf("April \n");
		break;
	}
	case May:
	{
		printf("May \n");
		break;
	}
	case Jun:
	{
		printf("June \n");
		break;
	}
	case Jul:
	{
		printf("July \n");
		break;
	}
	case Aug:
	{
		printf("August \n");
		break;
	}
	case Sept:
	{
		printf("September \n");
		break;
	}
	case Oct:
	{
		printf("October \n");
		break;
	}
	case Nov:
	{
		printf("November \n");
		break;
	}
	case Dec:
	{
		printf("December \n");
		break;
	}
	default:
		break;
	}
	return 0;
}