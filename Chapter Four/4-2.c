#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()   ����4-5
{
	int no;
	printf("������1��������"), scanf("%d", &no);
	while (no >= 0)
	{
		printf("%d ", no);
		no--;
	}
	printf("\n");
	return 0;
}*/

//��ϰ4-3
//int main()
//{
//	int no;
//	printf("������1��������"), scanf("%d", &no);
//	while (no >= 0)
//	{
//		printf("%d\n ", no);
//		no--;
//	}
//	printf("\n");
//	printf("�������");
//	return 0;
//}

//����4-6
/*int main()
{
	int no;
	printf("������1������:");
	scanf("%d", &no);
	while (no >= 0) {
//����1
		//printf("%d\n", no);
		//no--
//����2
		printf("%d\n", no--);
		//���õݼ�������ʽ  P89ע��
;
	}
	printf("����ִ�����");
	return 0;
}*/

//��ϰ4-4   ������ִ�л��в�����
/*int main()
{
	int nb;
	printf("������1������:"), scanf("%d", &nb);
	while (nb >= 1)
	{
		printf("%d\n", nb--);
	}
	printf("����ִ�����");
	return 0;
}*/

//����4-7
/*int main()
{
	int nb,na;
	printf("������1��������:"), scanf("%d", &nb);
	na = 0;
	while (na <= nb) {
		printf("%d ", na++);//i��ֵ����ʾ֮�����   p90�ײ�����ע��
		printf("\n");
	}
}*/


//��ϰ4-5 //����ֵС��0������������
/*int main()
{
	int nb, na;
	printf("������1��������:"), scanf("%d", &nb);
	na = 1;
	while (na <= nb) {
		printf("%d ", na++);
	}
	
}*/

//��ϰ4-6  //Ѱ����ֽⷨ������ֻʹ��while�����������
//int main()
//{
//	int i, nb;
//	printf("������1����������"), scanf("%d", &nb);
//	i = 2;
//	while (i <= nb) {
//		//����1:ʹ��if��丨��ʵ��
//		/*if (i % 2 == 0)
//			printf("%d ", i);
//		i = i + 1;*/
//		//����2
//		printf("%d ", i );
//		i = i + 2;
//		//printf("%d ", i + 2);
//	}
//	return 0;
//}

//��ϰ4-7  //�˷����ʵ��
/*int main()
{
	int a, b,i;
	printf("������1������:"), scanf("%d", &b);
	i = 1, a = 2;
	while (a <= b)
	{
		printf("%d ", a);
		i = i + 1;
		a = a *i;
	}
}*/


//����4-8
int main()
{

}