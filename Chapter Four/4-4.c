#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码4-16
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

//用break语句强制结束循环
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


//代码4-17
/*int main()
{
	int a, b;
	printf("让我们来画1个长方形");
	printf("高:"), scanf("%d", &a);
	printf("宽:"), scanf("%d", &b);

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

//代码4-18
/*int main()
{
	int a, b, c;
	printf("生成直角在左下方的等腰直角三角形");
	printf("短边: "), scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= b; c++) {
			printf("* ");
		}
			putchar('\n');
	}
}*/

//代码4-19
int main()
{
	int a, b, c;
	printf("生成直角在右下方的等腰直角三角形。");
	printf("短边:"), scanf("%d", &c);

	//for (a = 1; a <= c; a++)
	//{
	//	for (b = 1; b <= a; b++)
	//	{
	//		printf("%cd", b);   //可不可以用变量控制整数输出的位数?
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