#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


	void put_stars(int n)
	{
		while (n-- > 0)
			putchar('*');
	}

	int main()
	{
		int i,len;
		printf("����1��ֱ�������·��ĵ���ֱ��������\n");
		printf("�̱�:"), scanf("%d", &len);
			for (i = 1; i <= len; i++) {
				put_stars(i);
				putchar('\n');
			}

			return 0;
}