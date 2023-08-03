#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码6-7
/*void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main()
{
	int i, len;
	printf("生成1个直角在左下方的等腰直角三角形\n");
	printf("短边:"), scanf("%d", &len);
	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}*/

//代码6-8
/*void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}
int main()
{
	int i, len;

	printf("生成一个直角在下方的等腰直角三角形。\n");
	printf("短边:"), scanf("%d", &len);

	for(i = 1; i <= len; i++){

	put_chars(' ', len - i);
	put_chars('*', i);
	putchar('\n');
}
return 0;
	}*/

//练习6-6
/*void alert(int n)
{
	while (n-- > 0)
		putchar('\a');
}
int main()
{
	int x;
	printf("输入响铃次数:"), scanf("%d", &x);
	alert(x);

	return 0;
}*/


//代码清单6-9

//返回输入的正整数
/*int scan_pint(void)
{
	int tmp;
	do {
		printf("请输入1个正整数");
		scanf("%d", &tmp);
		if (tmp <= 0)
			puts("请不要输入非正整数");
	} while (tmp <= 0);

	return tmp;//要返回结果数值，不能等于0，出错了
}

//返回 正整数倒转后的值
int rev_int(int num)
{
	int x = 0;
	if (num > 0) {
		do {
			x = x * 10 + num % 10;
			num /= 10;

		} while (num > 0);
	}
	return x;//返回tmp!不能返回0!
}
//tmp=3      以321为例：x=0+1    num=32;x=10+2 num=3;x=120 +3 num=3 输出
//num=12
//tmp=32
//num=1

int main(void)
{
	int nx = scan_pint();//不赋予实参
	printf("该整数倒转后的值是:%d。\n", rev_int(nx));

	return 0;
}   //tmp=num=nx;

*/


//练习6-7
/*void hello(void)
{
	printf("你好\n");//只显示，不需要返回值（结果）！
}
int main()
{
	hello();
	return 0;
}*/

//代码6-10
/*#define NUMBER 5
int tensu[NUMBER];
int top(void);

int main()
{
	extern int tensu[];//数组为文件作用域，可省略此处非定义声明
	int i;
	printf("请输入%d名学生的分数:\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d：", i+1);
		scanf("%d", &tensu[i]);
	}
	printf("最高分为%d", top());

}

//返回数组tensu的最大值(函数top的函数定义)
int top(void)
{
	extern int tensu[];//数组为文件作用域，可省略此处非定义声明
	int i;
	int max = tensu[0];   //将max设为数组初始值:tensu[0],并与后面1-4进行比较；
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}*/


//代码6-11
/*#define NUMBER 5
int max_of(int v[], int n)   //比较数组的大小
{
	int i;
	int max = v[0];
	for (i = 1; i < n; i++)
	{
		if (v[i] > max)
			max = v[i];
	}
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];//英语的分数
	int mat[NUMBER];//数学的分数
	int max_e, max_m;  //最高分

	printf("请输入5名学生的分数:\n");     //输入全部学生的分数
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]: 英语:", i + 1), scanf("%d", &eng[i]);
		printf("      数学:"), scanf("%d", &mat[i]);
	}

	max_e = max_of(eng, NUMBER);  //将数组比较结果赋值给变量
	max_m = max_of(mat, NUMBER);
	printf("英语的最高分是:%d分\n", max_e);
	printf("数学的最高分是:%d分", max_m);
	return 0;
}*/


//代码6-12
//把0 赋值给有n个元素的数组v的所有元素
/*void set_zero(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		v[i] = 0;
}

void print_array(const  int v[], int n)//声明不改变所接收的数组元素的值！形参只能接受实参，无法在函数中改写实参数组的元素值！
//此处加const是什么意思？？？？？？？？去掉与否并没有影响程序结果的输出和运行！
{
	int i;
	printf("{"); //v[1] = 3; 不加const时，数组中的v[1]均会被赋值为所改变的新的数组元素的值
	for (i = 0; i < n; i++)
		printf("%d", v[i]);
	printf("}");
}

int main()
{
	int ary1[] = { 1,2,3,4,5 };
	int ary2[] = { 3,2,1};

	printf("ary1 = "); print_array(ary1, 5); putchar('\n');
	printf("ary2 = "); print_array(ary2, 3); putchar('\n');

	set_zero(ary1, 5); //把0赋给数组ary1的所有元素
	set_zero(ary2, 3); //把0赋给数组ary2的所有元素

	printf("把0赋给了两个数组的所有元素");
	printf("ary1="), print_array(ary1, 5), putchar('\n');
	printf("ary2="), print_array(ary2, 3), putchar('\n');
}*/


//练习6-8
/*int min_of(const int v[], int n)
{
	int min = v[0];
		int i;
	for (i = 0; i < n; i++) {
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main()
{
	int i;
	int x[5];
	printf("请输入1组数:");
	for (i = 0; i < 5; i++) {
		printf("%d：", i + 1), scanf("%d", &x[i]);
	}
	printf("最小的数是:%d", min_of(x, 5));

	return 0;
}*/


//练习6-9//是否要加宏？
/*void rev_intary(int v[], int n)
{
	//temp=1  假设共7i,i从1到7数值   temp=v[1]=1,v[1]=v[7-1-1]=5,v[5]=tmp,互换数值
		//1=5
	//	5=1

	int temp, i;
	for (i = 0; i < n / 2; i++)
	{
		temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main()
{
	int n, i;
	int v[n]=;
		

	printf("请输入数组的元素个数:"), scanf("%d", &n);

	printf("输入数组各元素的值:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	rev_intary(v, n);

	puts("输出各组元素倒序排列的值");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}

	return 0;
}*/

//练习6-10





//代码6-13
/*#define NUMBER 5
#define FALLED -1

int search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)         //什么原理？
			return FALLED;
		if (v[i] == key)
			return i;
		i++;
	}
}

int main()
{
	int i, ky, idx; //ky是要查找的值，idx接收函数search的结果
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
		putchar('\n');
	}
	printf("要查找的值:");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FALLED)
		puts("\a查找失败");
	else
		printf("%d是数组的第%d号元素",ky,idx+1);
	return 0;
}
*/