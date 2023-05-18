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
/*int main()
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
}*/


//练习4-14
/*int main()
{

}
*/


//练习4-15   //先了解清楚计算身高体重的公式
/*int main()
{
	int a, b, c;
	printf("开始数值:"), scanf("%d", & a);
	printf("结束数值:"), scanf("%d", &  b);
	printf("间隔数值:"), scanf("%d", & c);


}*/


//代码4-14

//int main()
//{
//	int a, i;
//	printf("输入1个整数值:"), scanf("%d", &a);
//
//	//方法1，使用if语句
//	/*for (i = 1; i <= a; i++)    //i=1   <=应不应该有?
//	{
//		if (i % 2 == 0)
//			printf("%d\t", i);
//	}*/
//	//方法2，for语句中直接使用复合运算符
//	for (i = 2; i <= a; i += 2)   //i=2,  <=应不应该有?，求该整数值以下的正偶数，不应该包含该输入的整数
//		printf("%d", i);
//	return 0;
//}

//代码4-15
int main()
{
	int a, b;
	printf("请输入1个整数值:"), scanf("%d", &b);

	for (a = 1; a <= b; a++)   //a<=b,最后输出a会比b大1，如果用<,又会无法输出整数自身的约数值
		if (b % a == 0)
			printf("%d\n\t", a);    

	return 0;
}