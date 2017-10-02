#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nu1, nu2;
	printf("輸入兩整數:\n");
	scanf("%d%d", &nu1, &nu2);
	if (nu1 % nu2 == 0)
	{
		printf("%d 是 %d的倍數。\n", nu1, nu2);

	}
	else
	{
		printf("%d 不是 %d的倍數。\n", nu1, nu2);
	}
	system("pause");
	return 0;
}