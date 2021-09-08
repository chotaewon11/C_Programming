#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	char ch;

	printf("문자 입력 :  ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d 입니다.\n", ch, (int)ch);
	return 0;
}