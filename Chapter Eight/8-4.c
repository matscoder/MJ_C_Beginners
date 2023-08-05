//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//返回阶乘的值
/*int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int num;
	printf("请输入1个整数:");
	scanf("%d", &num);

	printf("%d的阶乘为%d", num, factorial(num));

	return 0;
}*/


//练习8-6 不使用递归实现非负整数的阶乘   运行结果有误

/*int main()
{
	int i, n,retry;
		int x=1;
	
	do {
		printf("请输入1个非负整数:");
		scanf("%d", &n);
		if (n >= 0){
			for (i = n; i > 0; i--)
				x *= i;
			printf("%d 的阶乘为 %d\n", n, x);
			
			printf("是否继续输入？ 继续---1  不继续---0");
			scanf("%d", &retry);
		}
		else
		{
			printf("请重新输入!\n");
			retry = 1;
		};
	} while (retry);
	printf("程序执行完毕!");
	return 0;
}*/



//练习8-7



//练习8-8
/*int gcd(int x, int y)     //首先进行x与y的运算，余数为0则除数为最大公约数
                          //除数不为0 ，则除数y作为被除数，余数作为除数，再下一步将第一步的余数作为被除数，第二步的余数作为除数，从而循环计算
{
	if (x % y == 0)
		return y;
	return gcd(y, x % y);
}

//方法二:用循环实现
//int gcd(int a, int b)
//{
//	int c; c = a % b; //(a>b);
//		while (c != 0) {
//			a = b; b = c; c = a % b;
//		}
//	return b;
//}
int main()
{
	int x, y;
	printf("输入两个整数值:"), scanf("%d  %d", &x, &y);
	printf("它们的最大公约数是:%d", gcd(x, y));

	return 0;
}
*/
