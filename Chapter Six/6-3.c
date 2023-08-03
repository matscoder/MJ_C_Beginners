#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码6-17
/*int x = 75; //文件作用域

void print_x(void)
{
	printf("x=%d\n", x);

}

int main()
{
	int i;
	int x = 999; //块作用域
	
	
	print_x();

	for (i = 0; i < 5; i++) {
		int x = i * 100;   //块作用域
		printf("x=%d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}*/


//代码6-18
/*int fx = 0;  //静态存储期+文件作用域

void func(void)
{
	static int sx = 0;  //静态存储期+块作用域
	int ax = 0;           //自动存储期+块作用域

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main()
{
	int i;

	puts(" ax  sx  fx  ");
	puts("----------------");
	for (i = 0; i < 10; i++)
		func();
	puts("-----------------");

	return 0;
}*/


//代码6-19
/*int fx;

int main()
{
	int i;
	static int si;
	static double sd;
	static int sa[5];

	printf("fx=%d\n", fx);
	printf("si=%d\n",si );
	printf("sd=%f\n", sd);

	for (i = 0; i < 5; i++) {
		printf("sa[%d] = %d ", i, sa[i]);
	}

	return 0;
}
*/
//练习6-14

/*int main()
{
	double static x[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("x[%d] = %d\n", i, x[i]);

		
	}
	return 0;
}*/

//练习6-15

/*void put_count()
{
	static int i=0;
	i++;
		printf("put_count : 第%d次\n\a",i);

}
int main() {

	int i;
	int n = 5;
	for (i = 0; i < n; i++) {
		put_count();
	}
	return 0;   
}*/

//总结第一题:
/*double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main()
{
	int a, b;
	printf("请输入两个整数: ");
	printf("整数1: 和 整数2 : "), scanf("%d%d", &a, &b);
	printf("平均值是%.1f", ave2(a, b));

	return 0;
}*/

//总结第二类:3.c  以实数的形式返回数组a的所有元素的平均值
/*double ave_ary(const int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return (double)sum / n;
}

int main()
{
	int i;
	int a[5];
	for (i = 0; i < 5; i++){
		printf("a[%d]: ", i + 1), scanf("%d",& a[i]);
		putchar('\n');
	}
	printf("数组a所有元素平均值是:%.1f",ave_ary(a, 5));

	return 0;
}
*/


//总结第三类 5.c

/*#define NUMBER 5
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
		printf("a[%d]:%d ", i,a[i]);
	}
}

int main()
{
	int a[NUMBER];
	int b[NUMBER];
	int i,n;
	printf("数组b各元素分别是:\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("b[%d]:", i + 1), scanf("%d", &b[i]);
		putchar('\n');
	}

	printf("将数组b的多少个元素复制给数组a？"), scanf("%d", &n);
	printf("数组a复制后的值为:");
	cpy_ary(a, b, n);

	return 0;

}*/


//总结第四类:
int sum_ary2D(const int a[][3], int n)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		int i, j;
		int sum = 0;

		for (i = 0; i < n; i++)
			for (j = 0; j < 3; j++)
				sum += a[i][j];
		return sum;
	}
}

	int main()
		{
		int i, j;
		int a[5][3];
		printf("数组a[5][3]的值分别是:");
		for (i = 0; i < 5; i++)
			for (j = 0; j < 3; j++) {
		printf("a[%d][%d] : ",i,j), scanf("%d", &a[i][j]);
	}
		printf("二维数组a的所有构成元素的总和是:%d", sum_ary2D(a[5][3], 5));
	}