#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码9-1 显示字符串字面量的长度
/*
int main()
{
	printf("sizeof(\"123\")= %u\n ", (unsigned)sizeof("123"));
	printf("sizeof(\"AB\\tC\")= %u\n ", (unsigned)sizeof("AB\tC"));
	printf("sizeof(\"abc\\0def\")= %u\n ", (unsigned)sizeof("abc\0def"));
}*/


//代码清单9-2  将字符串存储在数组中并显示(其一：赋值)

/*int main()
{
	char str[4];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = '\0';

	printf("字符串str为 \"%s\"。 \n", str);

	return 0;
}*/

//代码清单9-3 将字符串存储在数组中并显示 （其二:初始化）

/*int main()
{
	char str[]="ABC";//或{"ABC"}，等效


	printf("字符串str为 \"%s\"。 \n", str);

	return 0;
}*/

//练习9-1
/*int main()
{
	char str[] = "ABC\0DEF";  //该元素不是字符串，中间加了\0  见p268页 ，末尾的null字符\0是字符串结束的标志


	printf("字符串str为 \"%s\"。 \n", str);

	return 0;
}
*/
//代码清单9-4
//询问名字并显示问候语（读取字符串）

/*int main()
{
	char name[48];

	printf("请输入您的名字:");
	scanf("%s", name);//注意，在scanf函数中，此处的name数组不带&运算符

	printf("%s", name);

	printf("您好，%s先生/女士 ！！\n",name);

	return 0;
}*/

//练习9-2 
/*int main()
{
	char s[] = "\0ABC";//"\0ABC"
		//方法2:  s[0]='\0';
	
	printf("字符串s = %s", s);

	return 0;
}*/

//代码清单9-5
//格式化字符串“12345”并显示
/*int main()
{
	char str[] = "12345";

	printf("%s\n", str);
	printf("%3s\n", str);
	printf("%.3s\n", str);
	printf("%8s\n", str);
	printf("%-8s\n", str);

	return 0;
}*/