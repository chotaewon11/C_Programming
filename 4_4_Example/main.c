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
	printf("2차원 공간 상 첫 번째 좌표 입력 : ");
	scanf("%lf,%lf",&x1, &y1);

	printf("2차원 공간 상 두 번째 좌표 입력 : ");
	scanf("%lf,%lf", &x2, &y2);

	dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("좌표1(%.2f,%.2f)와 좌표2(%.2f,%.2f)의 거리는 %.2f 입니다. \n", x1,y1,x2,y2, dis);


	return 0;
}