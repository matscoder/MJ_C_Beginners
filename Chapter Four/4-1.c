#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����4-1
/*int main()
{
	int retry;
	do {
		int no;
		printf("������1������"), scanf("%d", &no);
		if (no % 2)puts("�������������");
		else puts("���������ż��");

		printf("Ҫ�ظ�1����? [Yes...0/No...9]:");
		scanf("%d", &retry);

	} while (retry == 0);
	return 0;
}*/


//����4-2
/*int main()
{
	int hand;
	do {
		printf("��ѡ���ʲôȭ��0...ʯͷ/1...����/2...����");
		scanf("%d", &hand);

	} while (hand < 0 || hand>2); //!(hand >= 0 && hand <= 2);
	printf("��ѡ����:");
	switch (hand)
	{
	case 0:printf("ʯͷ\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	}
	return 0;
}
*/

//����4-3
/*int main()
{
	int sum = 0;
	int cnt = 0;
	int retry ;
	do {
		int t;

		printf("������1������");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;
		printf("�Ƿ������<Yes...0/No...9>");
		scanf("%d", &retry);

	} while (retry == 0);

	printf("��Ϊ%d,ƽ��ֵΪ%.2f��\n", sum, (double)sum / cnt);
	return 0;
}*/


//��ϰ4-1
//int main()
//{
//	int retry;
//	do {
//		int no;
//		printf("������1������");
//		scanf("%d", &no);
//		if (no == 0)puts("������Ϊ0");
//		else if (no > 0)puts("������Ϊ����");
//		else puts("������Ϊ����");
//		printf("�Ƿ����?<Yes...0/No...9>");
//		scanf("%d", &retry);
//
//	} while (retry == 0);
//
//	return 0;
//}
//
//
////��ϰ4-2
//
//int main()
//{
//	int retry;
//	do {
//		int a; int b;
//			printf("�������������� :");
//			printf("����1 :")��scanf("%d", &a);
//			printf("����2 :"), scanf("%d", &b);
//
//		
//	}
//}