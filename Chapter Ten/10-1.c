#define _CRT_SECURE_NOT_WARNINGS
#include <stdio.h>

//代码10-2
/*int main()
{
	int n;
	double x;
	int a[3];

	printf("n 的地址:%p\n", &n);
	printf("x 的地址:%p\n", &x);
	printf("a[0] 的地址:%p\n", &a[0]);
	printf("a[1] 的地址:%p\n", &a[1]);
	printf("a[2] 的地址:%p\n", &a[2]);

	return 0;
}*/

//代码10-3
/*int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	int* isako, * hiroko;

	isako = &sato;
	hiroko = &masaki;

	printf("大雄喜欢的人的身高: %d\n", *isako);
	printf("胖虎喜欢的人的身高: %d\n", *hiroko);

	isako = &sanaka;
	*hiroko = 180;     //将180赋值给*hiroko 等同于将180赋值于masaki

	putchar('\n');
	printf("静香的身高:%d\n", sato);
	printf("哆啦A梦的身高:%d\n", sanaka);
	printf("小夫的身高:%d\n", masaki);
	printf("大雄喜欢的人的身高的身高:%d\n", *isako);//大雄从喜欢静香变成喜欢哆啦A梦，哆啦A梦身高175
	printf("胖虎喜欢的人的身高:%d\n", *hiroko);//胖虎喜欢小夫，身高179变成180

	return 0;



}*/