#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码8-1
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

	printf("请输入1个整数:");
	scanf("%d", &n);
	printf("该数的平方是:%d\n\n", sqr_int(n));

	printf("请输入1个实数:");
	scanf("%lf", &x);
	printf("该数的平方是:%.3f", sqr_double(x));
	return 0;
}*/

//代码8-2
/*
#define sqr(x) ((x)*(x))

int main()
{
	int n ;
	double x;
	printf("请输入1个整数 :"), scanf("%d", &n);
	printf("该数的平方是:%d", sqr(n));

	printf("请输入1个实数 : "), scanf("%lf", &x);
	printf("该数的平方是 : %.3f", sqr(x));

	return 0;
}*/

//练习8-1
/*#define diff(x,y) (x-y)
int main()
{
	int a, b;
	printf("输入两个整数:\n");
		printf("a:"), scanf("%d", &a);
		printf("b:"), scanf("%d", &b);

		int max, min;
		max=a > b ?  a :  b;
		min=a < b ?  a :  b;
		
		printf("二者的差为%d", diff(max, min));
}*/

//练习8-2
//观察并推算条件运算符比较大小的步骤

//练习8-3
/*#define swap(type,a,b,c) double c;c=a;a=b;b=c;

int main()
{
	double a, b;
	printf("请分别输入要交换的两个值"), scanf("%lf%lf", &a, &b);
	swap(double, a, b,c);
	printf("交换后的结果是:%f  %f",a,b );

	return 0;
}*/

//代码8-4
#define puts_alert(str)(putchar('\a'),puts(str))

int main()
{
	int n;
	printf("请输入1个整数："), scanf("%d", &n);
	if (n)
		puts_alert("这个数不是0。");
	else
		puts_alert("这个数是0");

	return 0;
}