#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//初识if语句
/*int main()
{
	int no; 
	printf("请输入1个整数: "), scanf("%d", &no);
	
	if (no % 5)
		puts("输入的数不能被5整除");

	return 0;
}
*/


//判断奇偶
//int main()
//{
//	int no;
//	printf("请输入1个整数"), scanf("%d", &no);
//	if (no % 2)
//		puts("输入的整数是奇数");
//
//	return 0;
//}


//加入else
/*int main()
{
	int no;
	printf("请输入1个整数"), scanf("%d", & no);
	if (no % 5)
		puts("该整数不能被5整除");
	else
		puts("该整数能被5整除");

	return 0;
}*/


/*int main()
{
	int no;
	printf("请输入1个整数"), scanf("%d", &no);
	if (no % 2)
		puts("该整数是奇数");
	else
		puts("该整数是偶数");

	return 0;
}*/

//练习3-1
/*int  main()   //A除以B余数是0，则A是B的倍数，B是A的约数。A能被B整除，B能整除A
{
	int A, B;
	printf("整数A :"), scanf("%d", &A);
	printf("整数B :"), scanf("%d", &B);

	if (A % B)
		puts("A不是B的约数");  //余数不为0时，则A不是B的约数
	else
		puts("A是B的约数");

	return 0;

}*/


//非0的判断   使用变量num的值来判断
/*int main()
{
	int num;
	printf("请输入1个整数"), scanf("%d", &num);
	if (num)
		puts("该整数不是0");
	else
		puts("该整数是0");

		return 0;
}*/



//3-6相等运算符，若n1==n2,相等则表达式结果为1，否则是0
//不相等运算符！= 结果表示和相等运算符相反，两种运算符结果的类型均是int

/*int main()//相等运算符情况：
{
	int n1, n2;
	//printf("请输入两个整数\n整数1：\n整数2："), scanf("%d\n%d", &n1,& n2);//怎样把结果写进一行？

	puts("请输入两个整数：");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);

	if (n1 == n2)
		puts("它们相等");
	else
		puts("它们不相等");

		return 0;

}*/

//3-7不相等运算符情况：！=   两数结果相等则控制表达式结果为0，不相等则控制表达式结果为1
/*int main()
{
	int n1, n2;
	
	puts("请输入两个整数：");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);

	if (n1 != n2)
		puts("它们不相等");
	else
		puts("它们相等");

	return 0;

}*/


//余数的判断3-8
//判断输入整数个位数是否为5
//%的优先级比运算符==高
int main()
{
	int num;
	printf("请输入1个整数"), scanf("%d", &num);
	if ((num % 10) == 5)
		puts("该整数的个位数是5");
	else
		puts("该整数的个位数不是5");

	return 0;
}