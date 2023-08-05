#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码8-9
/*int main()
{
	int ch;

	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
	return 0;
}*/

//代码8-9
/*int main()
{
	int i, ch;
	int cnt[10] = { 0 }; //用0对所有的元素进行初始化

	while ((ch = getchar()) != EOF) {
		switch (ch) {
		case '0':cnt[0]++; break; //当ch等于以下范围时，数组的元素会自增，从0变成1
		case '1':cnt[1]++; break;
		case '2':cnt[2]++; break;
		case '3':cnt[3]++; break;
		case '4':cnt[4]++; break;
		case '5':cnt[5]++; break;
		case '6':cnt[6]++; break;
		case '7':cnt[7]++; break;
		case '8':cnt[8]++; break;
		case '9':cnt[9]++; break;
		}
	}

	puts("数字字符出现的次数");
	for (i = 0; i < 10; i++)
		printf("'%d' : %d \n", i, cnt[i]);

	return 0;
}
*/

//代码8-10  //有问题  //计算标准输入流中出现的数字字符数
/*int main()
{
	int i, ch;
	int cnt[10] = { 10 };

	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}
	puts("数字字符出现的次数");
	for (i = 0; i < 10; i++)
		printf("%d : %d \n", i, cnt[i]);

	return 0;
}
*/
//代码8-11  显示EOF和数字字符的值

/*int main()
{
	int i;
	printf("EOF = %d\n", EOF);

	for (i = 0; i < 10; i++)
		printf("'%d' = %d\n", i, '0' + i);

	return 0;
}*/

//练习8-10



//总结第一题:
/*enum RGB { Red, Green, Blue };

int main()
{
	int color;

	printf("0-2的值:");
	scanf("%d", &color);

	printf("你选择了");
	switch (color) {
	case 0:printf("红色。\n"); break;
	case 1:printf("绿色。\n"); break;
	case 2:printf("蓝色。\n"); break;
	}
	return 0;
}*/

//总结第二题:

#define alert() (putchar('\a'))

//显示字符c并换行
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{

	int ch;
	int sum = 0;

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {          //下面这部分有什么用？
			alert();
			putchar('\n');
		}
		else {
			putchar_ln(ch);
		}
	}
	printf("所有数字之和为 %d。\n", sum);
	return 0;
}

//10  连着输入两次10的结果,为什么结果会自动换行?
/*
1
0

10
1
0

^ Z
所有数字之和为 2。*/


