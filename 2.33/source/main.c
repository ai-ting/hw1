#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e ;
	int x, y, z;
	int q, w;
	printf("��J�C�Ѧ�p���{:");
	scanf("%d",&a);
	printf("�C�[�ڨT�o������:");
	scanf("%d",&b);
	printf("�C�[�ڨT�o��p���{��:");
	scanf("%d", &c);
	printf("�C�Ѫ������O:");
	scanf("%d", &d);
	printf("�C�Ѫ��L���O:");
	scanf("%d", &e);
	x = (a / c)*b + d + e;
	y = x / 3;
	z = x / 4;
	q = x - y;
	w = x - z;
	printf("�@�H�}����%u��\n",x);
	printf("�Y�P��H�@�������ᬰ%u��,��٤U%u��\n",y,q);
	printf("�Y�P�T�H�@�������ᬰ%u��,��٤U%u��\n",z,w);

	system("pause");
	return 0;

}