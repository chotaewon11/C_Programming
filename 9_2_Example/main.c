#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/

#define SIZE 80

void count(char* a, char* b, int* x);

int main(void)
{
    char a[SIZE] = " ";
    char b[] = "abcdefghijklmnopqrstuvwxyz";
    int x[sizeof(b) / sizeof(b[0])] = { 0 };
    int i;
    printf("문자열을 입력하세요(영문으로) : ");
    gets(a);
    count(a, b, x);
    for (i = 0; b[i] != NULL; i++)
        printf("%c: %d\n", b[i], x[i]);
    return 0;
}

void count(char* a, char* b, int* x)
{
    int i, j;
    for (j = 0; b[j] != NULL; j++)
    {
        for (i = 0; a[i] != NULL; i++)
        {
            if (b[j] == a[i])
                x[j]++;
        }
    }
}
