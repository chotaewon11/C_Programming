#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/

#define SIZE 80

void token1(char seps[], char* token);

int main(void)
{
    char a[SIZE] = " ";
    char seps[] = " ";
    char* token;
    char* c;
    int i, count;
    count = 0;
    printf("문자열을 입력하세요(영문으로) : ");
    gets(a);
    printf("출력문자열 : ");
    token = strtok(a, seps);
    c = token;
    token1(seps, token);
    printf("%s", c);
    printf("\n");
    return 0;
}
void token1(char seps[], char* token)
{
    token = strtok(NULL, seps);
    if (token != NULL)
    {
        token1(seps, token);
        printf("%s ", token);
    }
}
