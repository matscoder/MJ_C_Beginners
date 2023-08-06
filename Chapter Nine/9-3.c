#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码清单9-8 判断字符串的长度
/*int str_length(const char s[])
{
	int len = 0;
	while (s[len])  //s[len]非0 时，程序循环，len初始值为0，自增至出现null字符为止;
		len++;
	return len;
}

int main()
{
	char str[128];
	printf("请输入字符串:");
	scanf("%s", str);
	printf("字符串\"%s\"的长度是%d。\n", str, str_length(str));  //以输入字符串GT5为例，到出现null字符时长度为3,程序while循环结束

}*/

//练习9-4
/*void null_string(char s[]) {
	
	s[0] = '\0';
	printf("字符串s为%s", s);
}
int main()
{
	char s[] = "HELLOWORLD";
		null_string(s);
		return 0;

}*/


//练习9-5   //有问题！，运行提示c内存未初始化，局部变量c未初始化
/*int str_char(const char s[], int c)
{
	int a = 0;    //显示字符串长度:返回数组为某个值的元素的下标
	while (s[a]) {
		if (s[a] == c)
			return a;
		a++;
	}
	return -1;

}
int main()
{
	char c;
	char s[] = "hellochina";

	printf("字符c在字符串 \"%s\"中的下标为:%d", s, str_char(s, c));
	
	return 0;
}*/


//练习9-6
/*int str_chnum(const char s[], int c)
{
	int a = 0, b = 0;
	while (s[a])
	{
		if (s[a] == 'c')
			b++;
		a++;
	}
		return b;

		if (b == 0)
			return 0;
}
int main()
{
	char c = 'c';
	char s[] = "hellochinanancang";
	printf("字符串\"%s\"中\'%c\'字符的个数为%d", s, c, str_chnum(s, c));

	return 0;
}*/


//代码清单9-9  遍历字符串并显示
/*void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}
int main()
{
	char str[128];

	printf("请输入字符串:");
	scanf("%s", str);
	
	printf("你输入了");
	put_string(str);
	printf("。\n");
}*/

//练习9-7//怎样实现的？？？？？
/*void put_stringn(const char s[], int n)
{
	int num, i = 0;

	for (num = 0; num < n; num++){

		while (s[i])
		{
			putchar(s[i++]);
		}
		i=0;
	}

	return 0;
}

int main()
{
	char s[] = "多重影分身之术！";
	int n = 100;
	put_stringn(s, n);

	return 0;
}*/

//练习9-8 实现字符串的逆向输出
void put_stringr(const char s[]) {
	int num = 0, i = 0;
	while (s[num])   //确定数组的元素个数
		num++;
	while (i < num) {
		putchar(s[num - i - 1]);  5-0-1,5-1-1...实现逆向输出
		i++;
	}

}

int main()
{
	char s[] = "hello";
	put_stringr(s);

	return 0;
}


//代码清单9-10
//数字字符的出现次数

