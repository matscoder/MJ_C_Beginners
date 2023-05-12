#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()   代码4-5
{
	int no;
	printf("请输入1个正整数"), scanf("%d", &no);
	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}
	printf("\n");
	return 0;
}*/

//练习4-3
//int main()
//{
//	int no;
//	printf("请输入1个正整数"), scanf("%d", &no);
//	while (no >= 0)
//	{
//		printf("%d\n ", no);
//		no--;
//	}
//	printf("\n");
//	printf("程序结束");
//	return 0;
//}

//代码4-6
/*int main()
{
	int no;
	printf("请输入1个整数:");
	scanf("%d", &no);
	while (no >= 0) {
//方法1
		//printf("%d\n", no);
		//no--
//方法2
		printf("%d\n", no--);
		//后置递减运算表达式  P89注意
;
	}
	printf("程序执行完毕");
	return 0;
}*/

//练习4-4   怎样不执行换行操作？
/*int main()
{
	int nb;
	printf("请输入1个整数:"), scanf("%d", &nb);
	while (nb >= 1)
	{
		printf("%d\n", nb--);
	}
	printf("程序执行完毕");
	return 0;
}*/

//代码4-7
/*int main()
{
	int nb,na;
	printf("请输入1个正整数:"), scanf("%d", &nb);
	na = 0;
	while (na <= nb) {
		printf("%d ", na++);//i的值在显示之后递增   p90底部文字注解
		printf("\n");
	}
}*/


//练习4-5 //输入值小于0不换行怎样做
/*int main()
{
	int nb, na;
	printf("请输入1个正整数:"), scanf("%d", &nb);
	na = 1;
	while (na <= nb) {
		printf("%d ", na++);
	}
	
}*/

//练习4-6  //寻求多种解法，包括只使用while函数的情况下
//int main()
//{
//	int i, nb;
//	printf("请输入1个正整数："), scanf("%d", &nb);
//	i = 2;
//	while (i <= nb) {
//		//方法1:使用if语句辅助实现
//		/*if (i % 2 == 0)
//			printf("%d ", i);
//		i = i + 1;*/
//		//方法2
//		printf("%d ", i );
//		i = i + 2;
//		//printf("%d ", i + 2);
//	}
//	return 0;
//}

//练习4-7  //乘方如何实现
/*int main()
{
	int a, b,i;
	printf("请输入1个整数:"), scanf("%d", &b);
	i = 1, a = 2;
	while (a <= b)
	{
		printf("%d ", a);
		i = i + 1;
		a = a *i;
	}
}*/


//代码4-8
int main()
{

}