#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����4-16
/*int main()
{
	int a, b;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			printf("%3d", b*a);
		}

		putchar('\n');

	}
}*/

//��break���ǿ�ƽ���ѭ��
/*int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			int seki = i * j;
			if (seki > 40)
				break;
			printf("%3d", seki);
		}
		putchar('\n');
	}
	return 0;
}*/


//����4-17
/*int main()
{
	int a, b;
	printf("����������1��������");
	printf("��:"), scanf("%d", &a);
	printf("��:"), scanf("%d", &b);

	int g, k;
	for (g = 1; g <= a; g++)
	{
		for (k = 1; k <= b;  k++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}*/

//����4-18
/*int main()
{
	int a, b, c;
	printf("����ֱ�������·��ĵ���ֱ��������");
	printf("�̱�: "), scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= b; c++) {
			printf("* ");
		}
			putchar('\n');
	}
}*/

//����4-19
int main()
{
	int a, b, c;
	printf("����ֱ�������·��ĵ���ֱ�������Ρ�");
	printf("�̱�:"), scanf("%d", &c);

	//for (a = 1; a <= c; a++)
	//{
	//	for (b = 1; b <= a; b++)
	//	{
	//		printf("%cd", b);   //�ɲ������ñ����������������λ��?
	//	}
	//	putchar('\n');
	//}

	for (a = 1; a <= c; a++)
	{
		for (b = 1; b <= c - 1; b++)
			putchar(' ');
		for (b = 1; b <= a; b++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}