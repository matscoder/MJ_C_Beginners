#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//读取两个整数，显示其和，差，积，商和余数
//int main()
//{
//	int vx;
//	int vy;
//	puts("请输入两个整数");
//	printf("整数vx:"), scanf("%d", &vx);
//	printf("整数vy:"), scanf("%d", &vy);
//	printf("vx+vy=%d\n", vx + vy);
//	printf("vx-vy=%d\n", vx - vy);
//		printf("vx*vy=%d\n", vx * vy);
//		printf("vx/vy=%d\n", vx / vy);
//		printf("vx%%vy=%d\n", vx %vy);
//		return 0;
//}

//显示读取出的整数的最后一位数字
//int main(void)
//{
//	int no;
//	int np;
//
//	puts("请输入一个整数1："),scanf("%d", &no);
//	puts("请输入一个整数2："),scanf("%d", &np);
//
//		printf("相除结果是%d", no / np);
//	return 0;
//
//}

//int main(void)
//{
//	int no;
//	puts("请输入一个整数："), scanf("%d", &no);
//	printf("最后一位是%d", no % 10);
//	return 0;
//
//}


//多个转换说明-读取两个整数，显示它们的商和余数
//int main()
//{
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数a:"), scanf("%d", &a);
//	printf("整数b:"), scanf("%d", &b);
//	printf("a除以b得%d余%d", a / b, a % b);
//	return 0;
//}

//练习2-1，2
//int main()
//{
//	printf("请输入两个整数\n");
//	float x, y;
//	printf("整数x"), scanf("%.2f", &x);
//	printf("整数y"), scanf("%.2f", &y);
//	printf("x的值是y的%.2f%%", x / y*100);
//	return 0;
//	
//}  //搞明白        
//搞明白

// Code file created by C Code Develop

//#include "stdio.h"
/*int main()              练习2-1正确解法
{
int x, y;

printf("整数x：");
scanf("%d", &x );
printf("整数y：");
scanf("%d", &y);
printf("x的值是y的%d%%", x*100 /y);   注意分子分母的位置
return 0;

}*/

/*int main()
{
int a, b ;
puts("请输入两个整数");
printf("整数a：");
scanf("%d", &a );
printf("整数b");
scanf("%d", &b );
printf("它们的和是%d,积是%d", a+b, a*b);
return 0 ;
}*/



//对读取的整数值进行符号取反操作，并输出结果
/*int main ()
{
    int num ;
    printf("请输入一个整数");
    scanf("%d", &num);
    printf("符号取反之后的值是%d", -num);
    return  0 ;
}*/
