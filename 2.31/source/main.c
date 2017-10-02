#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("number	square	cube\n");
	int x,y,z;
	
	for (x = 1; x <= 10; ++x)
	{
		y = x*x;
		z = x*x*x;
		printf("%u	%u	%u\n",x,y,z);
	}
	system("pause");

}