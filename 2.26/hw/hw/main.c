#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nu1, nu2;
	printf("��J����:\n");
	scanf("%d%d", &nu1, &nu2);
	if (nu1 % nu2 == 0)
	{
		printf("%d �O %d�����ơC\n", nu1, nu2);

	}
	else
	{
		printf("%d ���O %d�����ơC\n", nu1, nu2);
	}
	system("pause");
	return 0;
}