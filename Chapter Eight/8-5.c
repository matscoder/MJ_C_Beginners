#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����8-9
/*int main()
{
	int ch;

	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
	return 0;
}*/

//����8-9
/*int main()
{
	int i, ch;
	int cnt[10] = { 0 }; //��0�����е�Ԫ�ؽ��г�ʼ��

	while ((ch = getchar()) != EOF) {
		switch (ch) {
		case '0':cnt[0]++; break; //��ch�������·�Χʱ�������Ԫ�ػ���������0���1
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

	puts("�����ַ����ֵĴ���");
	for (i = 0; i < 10; i++)
		printf("'%d' : %d \n", i, cnt[i]);

	return 0;
}
*/

//����8-10  //������  //�����׼�������г��ֵ������ַ���
/*int main()
{
	int i, ch;
	int cnt[10] = { 10 };

	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}
	puts("�����ַ����ֵĴ���");
	for (i = 0; i < 10; i++)
		printf("%d : %d \n", i, cnt[i]);

	return 0;
}
*/
//����8-11  ��ʾEOF�������ַ���ֵ

/*int main()
{
	int i;
	printf("EOF = %d\n", EOF);

	for (i = 0; i < 10; i++)
		printf("'%d' = %d\n", i, '0' + i);

	return 0;
}*/

//��ϰ8-10



//�ܽ��һ��:
/*enum RGB { Red, Green, Blue };

int main()
{
	int color;

	printf("0-2��ֵ:");
	scanf("%d", &color);

	printf("��ѡ����");
	switch (color) {
	case 0:printf("��ɫ��\n"); break;
	case 1:printf("��ɫ��\n"); break;
	case 2:printf("��ɫ��\n"); break;
	}
	return 0;
}*/

//�ܽ�ڶ���:

#define alert() (putchar('\a'))

//��ʾ�ַ�c������
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{

	int ch;
	int sum = 0;

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			sum += ch - '0';

		if (ch == '\n') {          //�����ⲿ����ʲô�ã�
			alert();
			putchar('\n');
		}
		else {
			putchar_ln(ch);
		}
	}
	printf("��������֮��Ϊ %d��\n", sum);
	return 0;
}

//10  ������������10�Ľ��,Ϊʲô������Զ�����?
/*
1
0

10
1
0

^ Z
��������֮��Ϊ 2��*/


