/*#include <stdio.h>
#include <limits.h>*/

//代码7-1
/*int main()
{
	puts("该环境下各字符型，整型数值的范围");
	printf("char   :%d-%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char   :%d-%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char   :%d-%d\n", 0, UCHAR_MAX);

	printf("short   :%d-%d\n", SHRT_MIN, SHRT_MAX);
	printf("int     :%d-%d\n", INT_MIN, INT_MAX);
	printf("long    :%d-%d\n", LONG_MIN, LONG_MAX);

	printf("unsigned short   :%u-%u\n", 0, USHRT_MAX);
	printf("unsigned         :%u-%u\n", 0, UINT_MAX);
	printf("unsigned long    :%u-%u\n", 0, ULONG_MAX);

	return 0;



}*/

//代码7-2

/*int main()
{
	printf("这个编译器中的char型是:");

	if (CHAR_MIN)
		puts("有符号的");
	else
		puts("无符号的");

	return 0;
}*/


//代码7-3 显示字符型和整型的长度

/*int main()
{
	printf("sizeof(char) = %u\n", (unsigned)sizeof(char));
	printf("sizeof(short) = %u\n", (unsigned)sizeof(short));
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof(long) = %u\n", (unsigned)sizeof(long));

	return 0;
}*/

//代码7-4
//显示数据类型和变量的长度
/*int main()
{
	int na, nb;
	double dx, dy;
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof(double) = %u\n", (unsigned)sizeof(double));

	printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
	printf("sizeof(dx) = %u\n", (unsigned)sizeof(dx));

	printf("sizeof(na+nb) = %u\n", (unsigned)sizeof(na+nb));
	printf("sizeof(na+dy) = %u\n", (unsigned)sizeof(na+dy));
	printf("sizeof(dx+dy) = %u\n", (unsigned)sizeof(dx+dy));

	return 0;
	
}*/

//代码清单7-5，求数组的元素个数;
/*int main()
{
	int vi[10];
	double vd[25];

	printf("数组vi的元素个数=%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));//数组的单个元素大小/数组整体的大小=数组的元素个数
	printf("数组vd的元素个数=%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));//数组的单个元素大小/数组整体的大小=数组的元素个数

	return 0;
}*/

