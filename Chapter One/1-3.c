#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ȡһ������ֵ������ʾ��������ȷ��
//int main()
//{
//	int no;
//	printf("������һ������:\n");
//	scanf("%d", &no);
//	printf("���������%d\n",no);
//	return 0;
//}

//�˷�����
//int main()
//{
//	int no;
//	printf("������һ������:");
//	scanf("%d", &no);
//	printf("�����屶����%d", 5 * no);
//	return 0;
//}

//��ϰ5��6
//int main()
//{
//	int no;
//	printf("������һ������:");
//	scanf("%d", &no);
//	printf("����������12�Ľ����%d\n",no+12);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//	printf("��������ȥ6�Ľ����:%d", no-6);
//	return 0;
//}

//�������puts
//��ȡ����������ֵ����ʾ���ǵĺ�
//int main()
//{
//	int n1;//Ϊʲôû�г�ʼֵ�ᱨ��
//	int n2 ;
//
//		printf("��������������");
//	scanf("%d,%d", &n1, &n2);
//		printf("���ǵĺ���%d", n1 + n2);
//	return 0;
//}

//int main()    �������
//{
//	int n1, n2;
//	puts("��������������");
//	printf("����1:"); scanf("%d", &n1);
//	printf("����2:"); scanf("%d", &n2);
//	printf("���ǵĺ���%d", n1 + n2);
//	return 0;
//}

//��ʾ����ȡ�������������ĺ�
//int main()
//{
//	int n1, n2;
//	int wa;
//	printf("��������������\n");  Ҳ������puts������
//	printf("����1��"); scanf("%d", &n1);
//	printf("����2��"); scanf("%d",&n2);
//	wa = n1 + n2;
//	printf("���ǵĺ���%d", wa);
//	return 0;
//
//}


//��ϰ7��8��9

//int main(void)
//{
//	puts("��"), puts("��"), puts("��");
//
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	int wa;
//	
//
//	puts("��������������");
//	puts("����1��"), scanf("%d", &n1);
//	puts("����2��"), scanf("%d,",&n2); 
//	wa = n1 * n2 ;
//	printf("���ǵĳ˻���%d", wa);
//	return 0;
//}

//int main()
//{
//	puts("����������������");
//	int n1, n2, n3, wa;
//	printf("����1��"),scanf("%d", &n1);
//		printf("����2��"), scanf("%d", &n2);
//	printf("����3��"), scanf("%d", &n3);
//	wa = n1 + n2 + n3;
//	printf("���ǵĺ���%d", wa);
//	return 0;
//}

//�ܽ���Ŀ
int main(void)
{
	puts("�󳤷��ε����");
	int width;  //�����εĳ�
	int height; //�����εĿ�
	int area;
	printf("����"), scanf("%d", &width);
	printf("��"), scanf("%d", &height);
	area = width * height;
	printf("�����%d\a\n", area);
	return 0;

}