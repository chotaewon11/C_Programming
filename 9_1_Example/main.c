#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/

#define SIZE 5

void merge(int *arrA, int *arrB, int *arrC, int nSize);

int main(void)
{
    int arrA[SIZE] = { 2,4,6,8,10 };
    int arrB[SIZE] = { 1,3,5,7,9 };
    int arrC[SIZE * 2] = { 0 };
    int i;

    printf("배열A: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arrA[i]);
    printf("\n");

    printf("배열B: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arrB[i]);
    printf("\n");

    merge(arrA, arrB, arrC, SIZE * 2);

    printf("배열C: ");
    for (i = 0; i < SIZE * 2; i++)
        printf("%d ", arrC[i]);

    printf("\n");
    return 0;
}

void merge(int *arrA, int *arrB, int *arrC, int nSize)
{
    int i, j, k;
    i = 0; j = 0; k = 0;
    for (k = 0; k < nSize; k++)
    {
        if (i >= nSize / 2)
        {
            arrC[k] = arrB[j];
            j++;
        }
        else if (j >= nSize / 2)
        {
            arrC[k] = arrA[i];
            i++;
        }
        else if (arrA[i] < arrB[j])
        {
            arrC[k] = arrA[i];
            i++;
        }
        else if (arrA[i] > arrB[j])
        {
            arrC[k] = arrB[j];
            j++;
        }
    }
}


