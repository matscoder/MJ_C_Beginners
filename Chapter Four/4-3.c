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
int main()
{
	int a, b;
	printf("正整数:"), scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		putchar('*');
		putchar('\n');
	}
		

	return 0;
}


//代码4-13
int main()
{
	int num, sum, avg;  //num输入的整数个数，sum 和  
	printf(输入多少个整数:), scanf("%d", &sum);


}