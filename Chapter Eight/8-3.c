/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum animal{Dog,Cat,Monky,Invalid };
void dog(void)
{
	puts("����!��");
}

void cat(void)
{
	puts("��-!!");
}

void monky(void)
{
	puts("����!!");
}

enum animal select(void)
{
	int tmp;
	do {
		printf("0 - ��  1 - è  2 - ��  3 - ����");
		scanf("%d", &tmp);
	} while (tmp<Dog || tmp>Invalid);
	return tmp;
}

int mian()
{
	enum animal selected;
	do {
		switch (selected = select()) {
		case Dog:dog(); break;
		case Cat:cat(); break;
		case Monky:monky(); break;
		}
	} while (selected != Invalid);

	return 0;
}*/