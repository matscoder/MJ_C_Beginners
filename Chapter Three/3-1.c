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
/*int main()
{
	int num;
	printf("������1������"), scanf("%d", &num);
	if ((num % 10) == 5)
		puts("�������ĸ�λ����5");
	else
		puts("�������ĸ�λ������5");

	return 0;
}*/

//int main() // 3-9
/*{
int no;
printf("������1�������� ");
scanf("%d", &no);
if (no > 0)
puts("������Ϊ����");

else if (no == 0)
puts("������Ϊ0");

else
puts("������Ϊ����");

}
*/

//��ϰ3-3

/*int main()
{
int num;
printf("������1������" );
scanf("%d", &num );
if (num >= 0)
printf("����ֵ��%d", num );
else
printf("����ֵ��%d", -num);

return  0;

}*/


//��ϰ3-4
/*int main()
{
int A, B ;
puts("��������������\n" );
printf("����A��");
scanf("%d", &A);
printf("����B��");
scanf("%d", &B );

if (A > B)
puts("A����B");
else if (A == B)
puts("A����B");
else
puts("AС��B");

return 0 ;
}
*/


//3-10
//Ƕ��if����ж���ż��if���ٷ�֧if��ʽ
/*int main()
{
int no;
printf("������1������"), scanf("%d", &no);
if (no > 0)
  if (no % 2)
  puts("������Ϊ����");
  else
  puts("������Ϊż��");
else
puts("������Ĳ�������\a\n");
return 0;
}
*/


//��ϰ3-5  δд


//����ϴ�ֵ
//3-11
/*int main()
{
	int n1, n2;
	puts("��������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);
	if (n1 > n2)
		printf("�ϴ������%d\n",n1);
	else
		printf("�ϴ������%d\n",n2);

	return 0;
}*/

//3-12,�ڱȽϴ�Сʱ���趨���������ϴ��ֵ���������������if���������ӡ���Σ���ӡһ�μ���
/*int main()
{
	int n1, n2,max;
	puts("��������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);

	if (n1 > n2)max = n1; else max = n2;
	printf("�ϴ������%d\n", max);

	return 0;

}*/

//���������������ֵ
//3-13

//int main()
//{
//	int n1, n2, n3, max;
//	puts("��������������");
//	printf("����1:"), scanf("%d", &n1);
//	printf("����2:"), scanf("%d", &n2);
//	printf("����3:"), scanf("%d", &n3);
//
//	//ע�⣺��n1��ֵ��max,����n2,n3���бȽ�
//	
//	max = n1;
//	/*if (max> n2) max = n2; //����Сֵд��
//	if (max > n3) max = n3;*/
//
//	if ( n2 > max ) max = n2; //�����ֵд��
//	if ( n3 > max) max = n3;
//	printf("���ֵ��%d\n", max);
//	return 0;
//}


//��������� 3-14
//���������������ʾ���������еĽϴ�ֵ
/*int main()
{
	int n1, n2,max;
	puts("��������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);

	max=(n1 > n2) ? n1 : n2;
	printf("�ϴ������%d\n", max);

}*/


//��ֵ���� 3-15
/*int main()
{
	int n1, n2;
	puts("��������������");
	printf("����1��"), scanf("%d", &n1);
	printf("����2��"), scanf("%d", &n2);

	printf("���ǵĲ���%d", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0;
}
*/


//��ϰ3-6
//���������е���Сֵ

//int main()
//{
//	int n1, n2, n3, max;
//	puts("��������������");
//	printf("����1��"), scanf("%d", &n1);
//	printf("����2��"), scanf("%d", &n2);
//	printf("����3��"), scanf("%d", &n3);
//	//���ñ������м�ֵ��д��
//	/*max = n1;
//	if (max > n2) max = n2;
//	if (max > n3) max = n3;
//	printf("�������е���Сֵ��%d", max);*/
//
//	//���������������д��
//	//printf("�������е���Сֵ��%d",(n1>n2)?n2)                        //Ҫ�����
//
//	return 0;
//}

//��ϰ3-7  
//������4�������е����ֵ
/*int main()
	{
	int n1, n2, n3, n4,max;
		printf("�������ĸ�����;"),scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
		max = n1;
		if (n2 > max) max = n2;
		if (n3 > max)max = n3;
		if (n4 > max)max = n4; 
		printf("�ĸ������е����ֵ��%d", max);

		return 0;
	}*/


//��ϰ3-8����д3-15
//ʹ��if���������������ֵ

/*int main()
{
	int a, b,max ;
	printf("����������������"), scanf("%d%d", &a, &b);
	if (a > b) max=a - b;
	else  max= b - a;
	
	printf("���ǵĲ���%d", max);
	//printf("���ǵĲ���%d",  b - a,a - b);   //%d���Ӧ����ʵ��ʱ����ִ�е�һ��ʵ��
	return 0;
}*/


//��ϰ3-9
//ʹ�����������ʵ����ϰ3-6�Ľ����������������Сֵ

/*int main()
{
	int a, b, c,min;
	printf("������3������"), scanf("%d%d%d", &a, &b, &c);

	min = a < b ? (a < c ? a : c) : (b < c ? b : c);
	
	printf("���������е���Сֵ��%d", min);

	return 0;
}*/

//�����������ֵ�������:
//1.
//max 1 = (a > b ? a : b) > c ? (a > b ? a : b) : c
//�ȶ�a��b���бȽ� �ٶ�c���бȽ� / ��a��b����c, ��ڶ�����ȡֵΪa��b / ��a��b��С��c����ֱ���������1�����ʽ��cΪ��Сֵ
////2.
//max 2 = a > b ? (a > c ? a : c) : (b > c ? b : c)
//�ȶ�a��b���бȽϣ���a����a��c�Ƚ�ȡ���ֵ����b����b��c�Ƚ�ȡ���ֵ
//max3 = (a > b ? a : b) ? (a > c ? a : c) : (b > c ? b : c)
//�ȶ�a��b�Ƚ�ȡ���ֵ����a������c�Ƚ�ȡ���ֵ����b������c�Ƚ�ȡ���ֵ







//������䣨����飩

int main()
{
	int n1, n2, max, min;
	printf("��������������"), scanf("%d %d", &n1, &n2);
	//����1
	//if (n1 > n2)printf("�ϴ������%d\n��С������%d", n1, n2);
	//else printf("�ϴ������%d\n��С������%d", n2, n1);

	//����2:������䣨����飩
	
	
	/*if (n1 > n2) {
		max = n1;
	    min = n2;}
	else	{
		max = n2;
	    min = n1;
		}
		printf("�ϴ������%d,��С������%d", max, min);*/

		//����3:���������ʵ��
		max = (n1 > n2) ? n1 : n2;
		min = (n1 <n2) ? n1 : n2;
		printf("�ϴ������%d,��С������%d",max,min);

	return 0;
}