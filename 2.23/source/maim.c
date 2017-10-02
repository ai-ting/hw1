#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nu1;
	int nu2;
	int nu3;
	
	printf("輸入三個整數:");
	scanf("%d%d%d", &nu1, &nu2 , &nu3);
	if (nu1 > nu2 & nu2>nu3)
	{
		printf("%d is the largest number.\n",nu1);
		
		printf("%d is the smallest number.\n", nu3);
	
	}
	if (nu1 > nu3 & nu3>nu2)
	{
		printf("%d is the largest number.\n", nu1);
		printf("%d is the smallest number.\n", nu2);

	}
	if (nu2 > nu1 & nu1>nu3)
	{
		printf("%d is the largest number.\n", nu2);
		printf("%d is the smallest number.\n", nu3);

	}
	if (nu2 > nu3 & nu3>nu1)
	{
		printf("%d is the largest number.\n", nu2);
		printf("%d is the smallest number.\n", nu1);

	}
	if (nu3 > nu1 & nu1>nu2)
	{
		printf("%d is the largest number.\n", nu3);
		printf("%d is the smallest number.\n", nu2);

	}
	if (nu3 > nu2 & nu2>nu1)
	{
		printf("%d is the largest number.\n", nu3);
		printf("%d is the smallest number.\n", nu1);

	}

	system("pause");
	return 0;


}