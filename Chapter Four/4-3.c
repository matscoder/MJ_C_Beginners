#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码4-11
/*int main()
{
	int a,i;
	printf("请输入1个正整数:"), scanf("%d", &a);
	for (i = 0; i <= a; i++)
		printf("%d ", i);
	putchar('\n');
}
*/
//代码4-12
/*int main()
{
	int a, b;
	printf("正整数:"), scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		putchar('*');
		putchar('\n');
	}
		

	return 0;
}*/


//代码4-13
/*int main()
{
	int num, sum=0;  //num输入的整数个数，sum 和  
	int i ,a;      //a为每次输入的整数
	printf("输入多少个整数:"), scanf("%d", &num);
	while (num < 0) {
		printf("请输入正整数!\n");
			printf("请重新输入:"), scanf("%d", &num);
	}
	for (i = 0; i < num; i++)            //先执行循环体，后执行收尾处理  ，<=一定会多一位，<号时，最后的i=num,<=时,i比num大一位，博客详细写
	{
		printf("NO.%d:", i+1 ), scanf("%d", &a);          // i的情况   i=0,1  i=1,2  i=2,3   i=3,4  i=4,5  i=6,  7  
		sum += a;
	}
	printf("合计值:%d\n平均值:%.2f\n", sum, (double)sum / num);
}*/


//练习4-13
int main()
{
	int a, b;
	int	sum=0;
	printf("请输入n的值:"), scanf("%d", &a);

	for (b = 0; b < a; b++)
	{
		printf("NO.%d:%d\t", b + 1,b+1);
		sum += b + 1;
	}
	printf("1到%d的和是%d", a, sum);
	return 0;
}