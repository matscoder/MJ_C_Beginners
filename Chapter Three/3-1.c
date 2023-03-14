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
/*int main()
{
	int num;
	printf("请输入1个整数"), scanf("%d", &num);
	if ((num % 10) == 5)
		puts("该整数的个位数是5");
	else
		puts("该整数的个位数不是5");

	return 0;
}*/

//int main() // 3-9
/*{
int no;
printf("请输入1个整数： ");
scanf("%d", &no);
if (no > 0)
puts("该整数为正数");

else if (no == 0)
puts("该整数为0");

else
puts("该整数为负数");

}
*/

//练习3-3

/*int main()
{
int num;
printf("请输入1个整数" );
scanf("%d", &num );
if (num >= 0)
printf("绝对值是%d", num );
else
printf("绝对值是%d", -num);

return  0;

}*/


//练习3-4
/*int main()
{
int A, B ;
puts("请输入两个整数\n" );
printf("整数A：");
scanf("%d", &A);
printf("整数B：");
scanf("%d", &B );

if (A > B)
puts("A大于B");
else if (A == B)
puts("A等于B");
else
puts("A小于B");

return 0 ;
}
*/


//3-10
//嵌套if语句判断奇偶，if下再分支if形式
/*int main()
{
int no;
printf("请输入1个整数"), scanf("%d", &no);
if (no > 0)
  if (no % 2)
  puts("该整数为奇数");
  else
  puts("该整数为偶数");
else
puts("您输入的不是正数\a\n");
return 0;
}
*/


//练习3-5  未写


//计算较大值
//3-11
/*int main()
{
	int n1, n2;
	puts("请输入两个整数");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);
	if (n1 > n2)
		printf("较大的数是%d\n",n1);
	else
		printf("较大的数是%d\n",n2);

	return 0;
}*/

//3-12,在比较大小时，设定变量，将较大的值存入变量，不用在if函数里面打印两次，打印一次即可
/*int main()
{
	int n1, n2,max;
	puts("请输入两个整数");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);

	if (n1 > n2)max = n1; else max = n2;
	printf("较大的数是%d\n", max);

	return 0;

}*/

//计算三个数的最大值
//3-13

//int main()
//{
//	int n1, n2, n3, max;
//	puts("请输入三个整数");
//	printf("整数1:"), scanf("%d", &n1);
//	printf("整数2:"), scanf("%d", &n2);
//	printf("整数3:"), scanf("%d", &n3);
//
//	//注意：将n1赋值给max,再与n2,n3进行比较
//	
//	max = n1;
//	/*if (max> n2) max = n2; //求最小值写法
//	if (max > n3) max = n3;*/
//
//	if ( n2 > max ) max = n2; //求最大值写法
//	if ( n3 > max) max = n3;
//	printf("最大值是%d\n", max);
//	return 0;
//}


//条件运算符 3-14
//利用条件运算符显示两个整数中的较大值
/*int main()
{
	int n1, n2,max;
	puts("请输入两个整数");
	printf("整数1:"), scanf("%d", &n1);
	printf("整数2:"), scanf("%d", &n2);

	max=(n1 > n2) ? n1 : n2;
	printf("较大的数是%d\n", max);

}*/


//差值计算 3-15
/*int main()
{
	int n1, n2;
	puts("请输入两个整数");
	printf("整数1："), scanf("%d", &n1);
	printf("整数2："), scanf("%d", &n2);

	printf("它们的差是%d", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0;
}
*/


//练习3-6
//求三个数中的最小值

//int main()
//{
//	int n1, n2, n3, max;
//	puts("请输入三个整数");
//	printf("整数1："), scanf("%d", &n1);
//	printf("整数2："), scanf("%d", &n2);
//	printf("整数3："), scanf("%d", &n3);
//	//利用变量作中间值的写法
//	/*max = n1;
//	if (max > n2) max = n2;
//	if (max > n3) max = n3;
//	printf("三个数中的最小值是%d", max);*/
//
//	//利用条件运算符的写法
//	//printf("三个数中的最小值是%d",(n1>n2)?n2)                        //要搞清楚
//
//	return 0;
//}

//练习3-7  
//求输入4个整数中的最大值
/*int main()
	{
	int n1, n2, n3, n4,max;
		printf("请输入四个整数;"),scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
		max = n1;
		if (n2 > max) max = n2;
		if (n3 > max)max = n3;
		if (n4 > max)max = n4; 
		printf("四个整数中的最大值是%d", max);

		return 0;
	}*/


//练习3-8，改写3-15
//使用if语句求两个整数差值

/*int main()
{
	int a, b,max ;
	printf("请输入两个整数："), scanf("%d%d", &a, &b);
	if (a > b) max=a - b;
	else  max= b - a;
	
	printf("它们的差是%d", max);
	//printf("它们的差是%d",  b - a,a - b);   //%d后对应两个实参时，会执行第一个实参
	return 0;
}*/


//练习3-9
//使用条件运算符实现练习3-6的结果，求三个数的最小值

/*int main()
{
	int a, b, c,min;
	printf("请输入3个整数"), scanf("%d%d%d", &a, &b, &c);

	min = a < b ? (a < c ? a : c) : (b < c ? b : c);
	
	printf("三个整数中的最小值是%d", min);

	return 0;
}*/

//求三个数最大值三种情况:
//1.
//max 1 = (a > b ? a : b) > c ? (a > b ? a : b) : c
//先对a和b进行比较 再对c进行比较 / 若a或b大于c, 则第二部分取值为a或b / 若a和b均小于c，则直接跳至最后1个表达式，c为最小值
////2.
//max 2 = a > b ? (a > c ? a : c) : (b > c ? b : c)
//先对a和b进行比较，若a大则a与c比较取最大值，若b大则b与c比较取最大值
//max3 = (a > b ? a : b) ? (a > c ? a : c) : (b > c ? b : c)
//先对a和b比较取最大值，若a大则与c比较取最大值，若b大则与c比较取最大值







//复合语句（程序块）

int main()
{
	int n1, n2, max, min;
	printf("请输入两个整数"), scanf("%d %d", &n1, &n2);
	//方法1
	//if (n1 > n2)printf("较大的数是%d\n较小的数是%d", n1, n2);
	//else printf("较大的数是%d\n较小的数是%d", n2, n1);

	//方法2:复合语句（程序块）
	
	
	/*if (n1 > n2) {
		max = n1;
	    min = n2;}
	else	{
		max = n2;
	    min = n1;
		}
		printf("较大的数是%d,较小的数是%d", max, min);*/

		//方法3:条件运算符实现
		max = (n1 > n2) ? n1 : n2;
		min = (n1 <n2) ? n1 : n2;
		printf("较大的数是%d,较小的数是%d",max,min);

	return 0;
}