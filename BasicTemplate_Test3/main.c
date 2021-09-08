#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Cho tae
*/
int main(void)
{
	double bmi, a, b;
	
	printf("몸무게(kg) : ");
	scanf("%lf",&a);

	printf("키(cm) 입력 : ");
	scanf("%lf",&b);

	bmi = a / (b * b) * 10000;
	//책 예제를 계산해보면 bmi범위가 나오기 위해 10000을 곱해야합니다.

	if (bmi >= 20.0 && bmi <=25.0) 
	{
		printf("정상입니다. \n");
	}
	else
	{
		printf("비정상입니다. \n");
	}
	return 0;
}