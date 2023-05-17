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
/*int main()
{
	int no;
	printf("请输入1个正整数:"), scanf("%d", &no);

	while (no-- > 0)
	{
		putchar('*');
		//putchar(' ');  同等道理
		printf(" ");
	}
	return 0;
}*/


//练习4-8  如何不输出换行符？


//代码4-9    要多看此代码！每天一次
/*int main()
{
	int i = 0;//i为前置递增中间过渡数值
	int sum = 0;//sum为所有整数的和
	int num, tmp;//num为输入整数个数，tmp为输入的每一个整数值

	printf("要输入多少个整数");
	scanf("%d", &num);

	while (i < num)
	{
		printf("No.%d : ", ++i); //no后的序号数值不会超过输入的整数个数
		scanf("%d", &tmp); //输入整数
		sum += tmp;//加且赋值运算符，左加右的的结果赋值给左操作数
	}
	
	printf("合计值 :%d \n", sum);
	printf("平均数 : %.2f", sum / (double)num);

	return 0;
}*/


//练习4-9   怎样用do语句实现？
/*int main()
{
	int no;
		int i=1;
	printf("请输入1个正整数");
	scanf("%d", &no);

	while (i <= no)
	{
		
		if (i % 2 == 0)//注意这里别把i写成no!
			putchar('-');
		else
			putchar('+');
		i++;         //p89
	}
	return 0;
}*/

//练习4-10

/*int main()
{
	int a, c;
	int b = 0;
	printf("正整数:"), scanf("%d", &a);
	do
	{
		b++;
		putchar('*');   //while (a > b++){puts("*");   第二种方法
		

	} while (b < a);

			return 0;
}
*/


//代码4-10
/*int main()
{
	int a;
	
	do
	{
		printf("请输入1个正整数:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a您输入的不是正整数");

	} while (a <= 0);

	printf("该整数逆向显示的结果是:");
	while (a > 0)
	{
		printf("%d", a % 10);

		a /= 10;
	}
	puts("。");
	return 0;
}*/


//练习4-11
/*int main()
{
	int a;

	do
	{
		printf("请输入1个正整数:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a您输入的不是正整数");

	} while (a <= 0);

	printf("%d逆向显示的结果是:",a);   //在此步骤调整即可
	while (a > 0)
	{
		printf("%d", a % 10);

		a /= 10;
	}
	puts("。");
	return 0;
}*/

//练习4-12
/*int main()
{
	int a;
int i=0;

	do
	{
		printf("请输入1个正整数:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a您输入的不是正整数");

	} while (a <= 0);

	printf("%d的位数是:", a);  
	while (a > 0)
	{
		
		//printf("%d", a % 10);

		a /= 10;
		
		i++;
	}
printf("%d", i);
	puts("。");
	return 0;
}*/