#define _CRT_SECURE_NOT_WARNINGS
#include <stdio.h>

//����10-2
/*int main()
{
	int n;
	double x;
	int a[3];

	printf("n �ĵ�ַ:%p\n", &n);
	printf("x �ĵ�ַ:%p\n", &x);
	printf("a[0] �ĵ�ַ:%p\n", &a[0]);
	printf("a[1] �ĵ�ַ:%p\n", &a[1]);
	printf("a[2] �ĵ�ַ:%p\n", &a[2]);

	return 0;
}*/

//����10-3
/*int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	int* isako, * hiroko;

	isako = &sato;
	hiroko = &masaki;

	printf("����ϲ�����˵����: %d\n", *isako);
	printf("�ֻ�ϲ�����˵����: %d\n", *hiroko);

	isako = &sanaka;
	*hiroko = 180;     //��180��ֵ��*hiroko ��ͬ�ڽ�180��ֵ��masaki

	putchar('\n');
	printf("��������:%d\n", sato);
	printf("����A�ε����:%d\n", sanaka);
	printf("С������:%d\n", masaki);
	printf("����ϲ�����˵���ߵ����:%d\n", *isako);//���۴�ϲ��������ϲ������A�Σ�����A�����175
	printf("�ֻ�ϲ�����˵����:%d\n", *hiroko);//�ֻ�ϲ��С�����179���180

	return 0;



}*/