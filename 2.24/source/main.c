#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("��J�@���: ");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("%d �O����\n", x);
	}
	if (x % 2 == 1)
	{
		printf("%d �O�_��\n", x);
	}
	system("pause");
	return 0;
}