#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//代码4-1
/*int main()
{
	int retry;
	do {
		int no;
		printf("请输入1个整数"), scanf("%d", &no);
		if (no % 2)puts("这个整数是奇数");
		else puts("这个整数是偶数");

		printf("要重复1次吗? [Yes...0/No...9]:");
		scanf("%d", &retry);

	} while (retry == 0);
	return 0;
}*/


//代码4-2
/*int main()
{
	int hand;
	do {
		printf("请选择出什么拳【0...石头/1...剪刀/2...布】");
		scanf("%d", &hand);

	} while (hand < 0 || hand>2); //!(hand >= 0 && hand <= 2);
	printf("你选择了:");
	switch (hand)
	{
	case 0:printf("石头\n"); break;
	case 1:printf("剪刀\n"); break;
	case 2:printf("布\n"); break;
	}
	return 0;
}
*/

//代码4-3
/*int main()
{
	int sum = 0;
	int cnt = 0;
	int retry ;
	do {
		int t;

		printf("请输入1个整数");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;
		printf("是否继续？<Yes...0/No...9>");
		scanf("%d", &retry);

	} while (retry == 0);

	printf("和为%d,平均值为%.2f。\n", sum, (double)sum / cnt);
	return 0;
}*/


//练习4-1
//int main()
//{
//	int retry;
//	do {
//		int no;
//		printf("请输入1个整数");
//		scanf("%d", &no);
//		if (no == 0)puts("该整数为0");
//		else if (no > 0)puts("该整数为正数");
//		else puts("该整数为负数");
//		printf("是否继续?<Yes...0/No...9>");
//		scanf("%d", &retry);
//
//	} while (retry == 0);
//
//	return 0;
//}
//
//
////练习4-2
//
//int main()
//{
//	int retry;
//	do {
//		int a; int b;
//			printf("请输入两个整数 :");
//			printf("整数1 :")，scanf("%d", &a);
//			printf("整数2 :"), scanf("%d", &b);
//
//		
//	}
//}