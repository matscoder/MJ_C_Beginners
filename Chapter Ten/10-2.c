#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码清单10-4
/*void hiroko(int* height)
{
	if (*height < 180)
		*height = 180;
}

int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	hiroko(&masaki);

	printf("大雄的身高：%d\n", sato);
	printf("胖虎的身高：%d\n", sanaka);
	printf("哆啦A梦的身高：%d\n", masaki);
}*/


//代码清单10-5
/*void sum_diff(int n1, int n2, int* sum, int* diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;

}

int main()
{
	int na, nb;
	int wa = 0, sa = 0;//分别对应和与差

	puts("请输入两个整数");
	printf("整数A:"), scanf("%d", &na);
	printf("整数B:"), scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);

	printf("两数之和是%d,之差是%d。\n", wa, sa);

	return 0;
}*/

//代码10-6

/*void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int na, nb;
	puts("请输入两个整数:");
	printf("整数1:"), scanf("%d", &na);
	printf("整数2:"), scanf("%d", &nb);

	swap(&na, &nb);

	puts("互换了两数的值");
	printf("整数A是:%d\n", na);
	printf("整数B是:%d\n", nb);

	return 0;

}*/

//练习10-1
/*void adjust_point(int* n)
{
	if (*n < 0)
		*n = 0;
	if(*n > 100)
		* n = 100;
	
	

}

int main()
{
	int a;
	printf("输入1个整数:"), scanf("%d", &a);
	adjust_point(&a);
	printf("a的值是:%d\n", a);

	return 0;
}
*/


//练习10-2


//代码清单10-7
/*void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

void sort2(int* n1, int* n2)
{
	if (*n1 > *n2)
		swap(n1, n2);//若n1>n2,则n1和n2的值互换，保证以升序的形式输出
}

int main()
{
	int na, nb;
	printf("请输入两个整数:\n");
		printf("第一个整数:"), scanf("%d", &na);
		printf("第二个整数:"), scanf("%d", &nb);
		sort2(&na, &nb);
		
		puts("将两数的值按升序排列");
		printf("整数1:%d\n", na);
		printf("整数2:%d\n", nb);

		return 0;
}*/

//练习10-3  //均无法运行，什么原因？？？
//方法1:使用一个对象式宏
void sort3(int* n1, int* n2, int* n3)
{
	int tmp;
	if (*n1 > *n2)
	{
		tmp = *n1;
		*n1 = *n2;
		*n2 = tmp;
	}

	if (*n1 > *n3)
	{
		tmp = *n1;
		*n1 = *n3;
		*n3 = tmp;
	}

	if (*n2 > *n3)
	{
		tmp = *n2;
		*n2 = *n3;
		*n3 = tmp;
	}
}

//方法2: 将互换数值与整数排序的方法分别结合在一起！
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort4(int* n1, int* n2, int* n3) {
	if (*n1 > *n2)
		swap(n1, n2);
	if (*n1 > *n3)
		swap(n1, n3);
	if (*n2 > *n3)
		swap(n2, n3);
}
int main()
{
	int a, b, c;
	puts("请输入3个整数:");
	printf("整数a："), scanf("%d", &a);
	printf("整数b："), scanf("%d", &b);
	printf("整数c："), scanf("%d", &c);

	sort4(&a, &b, &c);

	printf("将整数升序排列后的结果为: ");
	printf("第一个整数:%d\n第二个整数:%d\n第三个整数:%d\n",a,b,c);

		return 0;
}