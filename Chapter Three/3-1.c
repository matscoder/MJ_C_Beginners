#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��ʶif���
/*int main()
{
	int no; 
	printf("������1������: "), scanf("%d", &no);
	
	if (no % 5)
		puts("����������ܱ�5����");

	return 0;
}
*/


//�ж���ż
//int main()
//{
//	int no;
//	printf("������1������"), scanf("%d", &no);
//	if (no % 2)
//		puts("���������������");
//
//	return 0;
//}


//����else
/*int main()
{
	int no;
	printf("������1������"), scanf("%d", & no);
	if (no % 5)
		puts("���������ܱ�5����");
	else
		puts("�������ܱ�5����");

	return 0;
}*/


/*int main()
{
	int no;
	printf("������1������"), scanf("%d", &no);
	if (no % 2)
		puts("������������");
	else
		puts("��������ż��");

	return 0;
}*/

//��ϰ3-1
/*int  main()   //A����B������0����A��B�ı�����B��A��Լ����A�ܱ�B������B������A
{
	int A, B;
	printf("����A :"), scanf("%d", &A);
	printf("����B :"), scanf("%d", &B);

	if (A % B)
		puts("A����B��Լ��");  //������Ϊ0ʱ����A����B��Լ��
	else
		puts("A��B��Լ��");

	return 0;

}*/


//��0���ж�   ʹ�ñ���num��ֵ���ж�
/*int main()
{
	int num;
	printf("������1������"), scanf("%d", &num);
	if (num)
		puts("����������0");
	else
		puts("��������0");

		return 0;
}*/



//3-6������������n1==n2,�������ʽ���Ϊ1��������0
//������������= �����ʾ�����������෴�������������������;���int

/*int main()//�������������
{
	int n1, n2;
	//printf("��������������\n����1��\n����2��"), scanf("%d\n%d", &n1,& n2);//�����ѽ��д��һ�У�

	puts("����������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);

	if (n1 == n2)
		puts("�������");
	else
		puts("���ǲ����");

		return 0;

}*/

//3-7�����������������=   ��������������Ʊ��ʽ���Ϊ0�����������Ʊ��ʽ���Ϊ1
/*int main()
{
	int n1, n2;
	
	puts("����������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);

	if (n1 != n2)
		puts("���ǲ����");
	else
		puts("�������");

	return 0;

}*/


//�������ж�3-8
//�ж�����������λ���Ƿ�Ϊ5
//%�����ȼ��������==��
int main()
{
	int num;
	printf("������1������"), scanf("%d", &num);
	if ((num % 10) == 5)
		puts("�������ĸ�λ����5");
	else
		puts("�������ĸ�λ������5");

	return 0;
}