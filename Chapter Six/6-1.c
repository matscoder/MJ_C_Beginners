#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数调用  代码清单6-1
/*int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int n1, n2;
	puts("请输入两个整数");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);

	printf("较大的整数的值是%d", max2(n1, n2));

	return 0;

}*/

//函数只使用一个return 返回值时的情况:
//1.
/*int max2(int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;

	return max;
}

//2.
int max2(int a, int b)
{
	int max = a;
	if (b > max)
		max = b;
	return max;
}

//3.
int max2(int a, int b)
{
	return (a > b) ? a : b;
}

*/

//代码6-2
/*int max3(int a, int b, int c)
{
	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	//方法2：课本方法
	int max = a;
	if (b>max)
		max = b;
	if (c>max)
		max = c;
}
int main()
{
	int a, b, c;
	printf("请输入3个整数：\n");
	printf("整数a:"), scanf("%d", &a);
	printf("整数b:"), scanf("%d", &b);
	printf("整数c:"), scanf("%d", &c);

	printf("最大值是:%d", max3(a, b, c));
}*/


//练习1:
/*#define NUMBER 2
int min2(int a, int b)
{
	int min = a;
	if (min > b)
		min = b;
	//return (a>b)?b:a;

	return min;
}

int main()
{
	int a, b;
	printf("请输入%d个整数:\n",NUMBER);
	printf("整数1:"), scanf("%d", &a);
	printf("整数2:"), scanf("%d", &b);

	printf("较小一数的值是:%d", min2(a, b));

	return 0;

}*/

//练习6-2
/*#define NUMBER 3
int min3(int a, int b,int c)
{
	//int min = a;
	//if (min > b)
	//	min = b;
	//if (min > c)
	//	min = c;
	return (a>b)?((b>c)?c:b):((a>c)?c:a);

	//return min;
}

int main()
{
	int a, b,c;
	printf("请输入%d个整数:\n", NUMBER);
	printf("整数1:"), scanf("%d", &a);
	printf("整数2:"), scanf("%d", &b);
	printf("整数3:"), scanf("%d", &c);

	printf("较小一数的值是:%d", min3(a, b, c));

	return 0;

}*/

//代码6-3
/*#define NUMBER 2

//返回x的平方
int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return ((a > b) ? a - b : b - a);
}

int main()
{
	int X, Y;
	printf("请输入%d个整数:\n",NUMBER);
	printf("整数X:"), scanf("%d", &X);
	printf("整数Y:"), scanf("%d", &Y);

	printf("X和Y的平方差是%d", diff(sqr(X), sqr(Y)));

	return 0;
}*/

//练习6-3
/*int cube(int x)
{
	return x * x * x;
}

int main()
{
	int x;
	printf("请输入一个整数:"), scanf("%d", &x);
	printf("该整数的立方是:%d", cube(x));

	return 0;
}*/

//代码6-3
/*int max2(int a, int b)
{
	return a > b ? a : b;
}
int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}

int main()
{
	int n1, n2, n3, n4;
	printf("请输入4个整数\n");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);
	printf("整数3:"), scanf("%d", &n3);
	printf("整数4:"), scanf("%d", &n4);

	printf("最大值是%d", max4(n1, n2, n3, n4));

	return 0;
}*/

//	练习6-4
/*int sqr(int x)
{
	return(x * x);
}
int pow4(int x)
{
	return (sqr(x) * sqr(x));
}

int main()
{
	int a;
	printf("请输入1个整数:\n"), scanf("%d", &a);

	printf("该整数的四次幂是:%d", pow4(a));

	return 0;
}*/


//代码6-5
/*double power(double x, int n)//x是底数，n是指数
{
	int i;
	double tmp = 1.0;
	for (i = 1; i <= n; i++)
		tmp *= x;   //tmp作为储存结果的变量，当i=1时，x的指数为1，则tmp=x的1次方=x。   tmp不能等于x,1.tmp=x时，条件表达式循环体是否可以范围减少1 i<n？ 2.x=0时，为什么指数幂也会变为0？会输出tmp=1.0(为什么？)
	return tmp;                 //当tmp=x时,n=1,i<n,i=1,则for不成立,则直接tmp=x输出  ，为什么不能tmp=x?
}
int main()
{
	double a;
	int  b;
	printf("求a的b次幂:\n");
	printf("实数a:"), scanf("%lf", &a);
	printf("整数b:"), scanf("%d", &b);

	printf("%.2f的%2d次幂是:%.2f", a,b,power(a, b));
}*/

//代码6-6   求6-5幂函数的另一种方法   假设tmp=x,while(n-->0),n=1,则可成立
/*double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;
	return tmp;
}
int main()
{
	double a;
	int  b;
	printf("求a的b次幂:\n");
	printf("实数a:"), scanf("%lf", &a);
	printf("整数b:"), scanf("%d", &b);

	printf("%.2f的%2d次幂是:%.2f", a, b, power(a, b));
}*/


//练习6-5
int sump(int n)
{
	int i=1;
	int tmp=0 ;
	//for (i = 1; i <= n; i++) //正序相加
	//	tmp += i;
	//return tmp;
	//方法2  倒序相加
	//while(n>0)     
	//sum += n;
	//n--;
//方法三:使用while语句正序相加:
	while (i <= n){
	tmp += i; 
	i++;
	}
	return tmp;
}
int main()
{
	int a;
	printf("输入1个整数:"), scanf("%d", &a);
	printf("1到该整数之间所有整数的和为:%d", sump(a));

	return 0;
}









































