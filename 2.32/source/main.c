#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double a;
	double b;
	double x;
	
	printf("輸入你的身高(公尺):");
	scanf("%lf",&a);
	printf("輸入你的體重(公斤):");
	scanf("%lf",&b);
	x = (b) / (a*a);
	printf("你的BMI值為:%lf\n",x);
	if (x < 18.5)
	{
		printf("你的BMI值過低\n");

	}
	if (18.5 < x & x< 24.9)
	{
		printf("你的BMI值正常\n");
	}
	if (25 < x & x < 29.9)
	{
		printf("你的BMI值過高\n");
	}
	if(x>30)
	{
		printf("你的BMI值超級高\n");
	}
	system("pause");
	return 0;
}