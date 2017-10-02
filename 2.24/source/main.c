#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("块俱计: ");
	scanf("%d", &x);
	if (x % 2 == 0)
	{
		printf("%d 琌案计\n", x);
	}
	if (x % 2 == 1)
	{
		printf("%d 琌计\n", x);
	}
	system("pause");
	return 0;
}