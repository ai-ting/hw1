#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e ;
	int x, y, z;
	int q, w;
	printf("輸入每天行駛里程:");
	scanf("%d",&a);
	printf("每加侖汽油的價格:");
	scanf("%d",&b);
	printf("每加侖汽油行駛里程數:");
	scanf("%d", &c);
	printf("每天的停車費:");
	scanf("%d", &d);
	printf("每天的過路費:");
	scanf("%d", &e);
	x = (a / c)*b + d + e;
	y = x / 3;
	z = x / 4;
	q = x - y;
	w = x - z;
	printf("一人開車為%u元\n",x);
	printf("若與兩人共乘平分後為%u元,能省下%u元\n",y,q);
	printf("若與三人共乘平分後為%u元,能省下%u元\n",z,w);

	system("pause");
	return 0;

}