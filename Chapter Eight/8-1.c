#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����8-1
/*int sqr_int(int x)
{
	return x * x;
}

double sqr_double(double x)
{
	return x * x;
}

int main()
{
	int n;
	double x;

	printf("������1������:");
	scanf("%d", &n);
	printf("������ƽ����:%d\n\n", sqr_int(n));

	printf("������1��ʵ��:");
	scanf("%lf", &x);
	printf("������ƽ����:%.3f", sqr_double(x));
	return 0;
}*/

//����8-2
/*
#define sqr(x) ((x)*(x))

int main()
{
	int n ;
	double x;
	printf("������1������ :"), scanf("%d", &n);
	printf("������ƽ����:%d", sqr(n));

	printf("������1��ʵ�� : "), scanf("%lf", &x);
	printf("������ƽ���� : %.3f", sqr(x));

	return 0;
}*/

//��ϰ8-1
/*#define diff(x,y) (x-y)
int main()
{
	int a, b;
	printf("������������:\n");
		printf("a:"), scanf("%d", &a);
		printf("b:"), scanf("%d", &b);

		int max, min;
		max=a > b ?  a :  b;
		min=a < b ?  a :  b;
		
		printf("���ߵĲ�Ϊ%d", diff(max, min));
}*/

//��ϰ8-2
//�۲첢��������������Ƚϴ�С�Ĳ���

//��ϰ8-3
/*#define swap(type,a,b,c) double c;c=a;a=b;b=c;

int main()
{
	double a, b;
	printf("��ֱ�����Ҫ����������ֵ"), scanf("%lf%lf", &a, &b);
	swap(double, a, b,c);
	printf("������Ľ����:%f  %f",a,b );

	return 0;
}*/

//����8-4
#define puts_alert(str)(putchar('\a'),puts(str))

int main()
{
	int n;
	printf("������1��������"), scanf("%d", &n);
	if (n)
		puts_alert("���������0��");
	else
		puts_alert("�������0");

	return 0;
}