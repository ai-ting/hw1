#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double a;
	double b;
	double x;
	
	printf("��J�A������(����):");
	scanf("%lf",&a);
	printf("��J�A���魫(����):");
	scanf("%lf",&b);
	x = (b) / (a*a);
	printf("�A��BMI�Ȭ�:%lf\n",x);
	if (x < 18.5)
	{
		printf("�A��BMI�ȹL�C\n");

	}
	if (18.5 < x & x< 24.9)
	{
		printf("�A��BMI�ȥ��`\n");
	}
	if (25 < x & x < 29.9)
	{
		printf("�A��BMI�ȹL��\n");
	}
	if(x>30)
	{
		printf("�A��BMI�ȶW�Ű�\n");
	}
	system("pause");
	return 0;
}