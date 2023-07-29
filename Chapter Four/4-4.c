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
/*int main()
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
}*/


//代码4-20
/*int main()
{
	int a, b, c;
	do{
	
	do {
         printf("请输入1个正整数:"), scanf("%d", &a);
		if (a <= 0)
			printf("请不要输入非正整数\n");
	} while (a <= 0);

	for (b = 1; b <= a; b++)
	{
		putchar('*');
	}
	putchar('\n');
	printf("是否继续执行？[Yes 1   NO 0 ]");
	scanf("%d", &c);
	if (c == 0)
		printf("执行完毕，结束");
	}while (c == 1);

}*/


//练习4-20


//练习4-21
/*int main()
{
	int a, b,c;
	printf("生成1个正方形\n正方形有几层: "), scanf("%d",& b);
	
	for (a = 1; a <= b; a++)
	{
		for (c = 1; c <= b; c++)
			printf("* ");
		putchar('\n');
	}
	printf("正方形如上图所示");
	return 0;
}*/

//练习4-22
/*int main()
{
	int a, b, c, d;
	int min = 0; int max = 0;
	printf("让我们来画1个长方形:\n一边:%d\n另一边:%d\n"), scanf("%d%d", &a, &b);
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


//练习4-23；使直角在左上方和右上方



//练习4-24
/*int main()
{
	int a, b, c,d;
	printf("让我们来画一个金字塔:\n金字塔有几层:"), scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (d = 1; d <= a - b; d++)
			printf(" ");
		for (c = 1; c <= (b - 1) * 2 + 1; c++) //此处的b一定是当前的行数而不是总行数（生成金字塔的！）
			//printf("%(a-1)/2d, *" );//如何用控制位数实现
			printf("*");
	
		printf("\n");
	}
	
	return 0;
}*/

//练习4-25
int main()
{
	int a, b, c, d;
	printf("让我们来画一个向下的金字塔：\n金字塔有几层:"), scanf("%d", &c);
	for (a = 1; a <= c; a++)
	{
		for (d = 1; d <= a % 10;d++)
			printf(" ");
		for (b = 1; b <= a % 10; b++)
				printf("*");
	}
	return 0;
}(未完成！)