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
/*int main()
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
}*/


//����4-20
/*int main()
{
	int a, b, c;
	do{
	
	do {
         printf("������1��������:"), scanf("%d", &a);
		if (a <= 0)
			printf("�벻Ҫ�����������\n");
	} while (a <= 0);

	for (b = 1; b <= a; b++)
	{
		putchar('*');
	}
	putchar('\n');
	printf("�Ƿ����ִ�У�[Yes 1   NO 0 ]");
	scanf("%d", &c);
	if (c == 0)
		printf("ִ����ϣ�����");
	}while (c == 1);

}*/


//��ϰ4-20


//��ϰ4-21
/*int main()
{
	int a, b,c;
	printf("����1��������\n�������м���: "), scanf("%d",& b);
	
	for (a = 1; a <= b; a++)
	{
		for (c = 1; c <= b; c++)
			printf("* ");
		putchar('\n');
	}
	printf("����������ͼ��ʾ");
	return 0;
}*/

//��ϰ4-22
/*int main()
{
	int a, b, c, d;
	int min = 0; int max = 0;
	printf("����������1��������:\nһ��:%d\n��һ��:%d\n"), scanf("%d%d", &a, &b);
	if (a >= b)
		min == b, max == a;
	else
		min == a, max == b;
	for (c = 1; c <= min; c++)
		for (d = 1; d <= max; d++)
			printf("* ");
	printf("\n");

	return 0;
}*/


//��ϰ4-23��ʹֱ�������Ϸ������Ϸ�



//��ϰ4-24
/*int main()
{
	int a, b, c,d;
	printf("����������һ��������:\n�������м���:"), scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (d = 1; d <= a - b; d++)
			printf(" ");
		for (c = 1; c <= (b - 1) * 2 + 1; c++) //�˴���bһ���ǵ�ǰ�����������������������ɽ������ģ���
			//printf("%(a-1)/2d, *" );//����ÿ���λ��ʵ��
			printf("*");
	
		printf("\n");
	}
	
	return 0;
}*/

//��ϰ4-25
int main()
{
	int a, b, c, d;
	printf("����������һ�����µĽ�������\n�������м���:"), scanf("%d", &c);
	for (a = 1; a <= c; a++)
	{
		for (d = 1; d <= a % 10;d++)
			printf(" ");
		for (b = 1; b <= a % 10; b++)
				printf("*");
	}
	return 0;
}(δ��ɣ�)