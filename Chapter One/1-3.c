#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//读取一个整数值，并显示出来进行确认
//int main()
//{
//	int no;
//	printf("请输入一个整数:\n");
//	scanf("%d", &no);
//	printf("您输入的是%d\n",no);
//	return 0;
//}

//乘法运算
//int main()
//{
//	int no;
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//	printf("它的五倍数是%d", 5 * no);
//	return 0;
//}

//练习5，6
//int main()
//{
//	int no;
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//	printf("该整数加上12的结果是%d\n",no+12);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//	printf("该整数减去6的结果是:%d", no-6);
//	return 0;
//}

//输出函数puts
//读取两个整数的值，显示它们的和
//int main()
//{
//	int n1;//为什么没有初始值会报错
//	int n2 ;
//
//		printf("请输入两个整数");
//	scanf("%d,%d", &n1, &n2);
//		printf("它们的和是%d", n1 + n2);
//	return 0;
//}

//int main()    范例结果
//{
//	int n1, n2;
//	puts("请输入两个整数");
//	printf("整数1:"); scanf("%d", &n1);
//	printf("整数2:"); scanf("%d", &n2);
//	printf("它们的和是%d", n1 + n2);
//	return 0;
//}

//显示出读取到的两个整数的和
//int main()
//{
//	int n1, n2;
//	int wa;
//	printf("请输入两个整数\n");  也可以用puts函数！
//	printf("整数1："); scanf("%d", &n1);
//	printf("整数2："); scanf("%d",&n2);
//	wa = n1 + n2;
//	printf("它们的和是%d", wa);
//	return 0;
//
//}


//练习7，8，9

//int main(void)
//{
//	puts("天"), puts("地"), puts("人");
//
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	int wa;
//	
//
//	puts("请输入两个整数");
//	puts("整数1："), scanf("%d", &n1);
//	puts("整数2："), scanf("%d,",&n2); 
//	wa = n1 * n2 ;
//	printf("它们的乘积是%d", wa);
//	return 0;
//}

//int main()
//{
//	puts("请输入三个整数：");
//	int n1, n2, n3, wa;
//	printf("整数1："),scanf("%d", &n1);
//		printf("整数2："), scanf("%d", &n2);
//	printf("整数3："), scanf("%d", &n3);
//	wa = n1 + n2 + n3;
//	printf("它们的和是%d", wa);
//	return 0;
//}

//总结题目
int main(void)
{
	puts("求长方形的面积");
	int width;  //长方形的长
	int height; //长方形的宽
	int area;
	printf("长："), scanf("%d", &width);
	printf("宽："), scanf("%d", &height);
	area = width * height;
	printf("面积是%d\a\n", area);
	return 0;

}