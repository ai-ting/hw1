#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("輸入一整數: ");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("%d 是偶數\n", x);
	}
	if (x % 2 == 1)
	{
		printf("%d 是奇數\n", x);
	}
	system("pause");
	return 0;
}