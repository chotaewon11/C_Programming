#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* made by Cho tae
*/
int main(void)
{
	double x1,x2,y1,y2;
	double dis;
	printf("2���� ���� �� ù ��° ��ǥ �Է� : ");
	scanf("%lf,%lf",&x1, &y1);

	printf("2���� ���� �� �� ��° ��ǥ �Է� : ");
	scanf("%lf,%lf", &x2, &y2);

	dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("��ǥ1(%.2f,%.2f)�� ��ǥ2(%.2f,%.2f)�� �Ÿ��� %.2f �Դϴ�. \n", x1,y1,x2,y2, dis);


	return 0;
}