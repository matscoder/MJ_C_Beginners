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
/*int main()
{
	int no;
	printf("������1��������:"), scanf("%d", &no);

	while (no-- > 0)
	{
		putchar('*');
		//putchar(' ');  ͬ�ȵ���
		printf(" ");
	}
	return 0;
}*/


//��ϰ4-8  ��β�������з���


//����4-9    Ҫ�࿴�˴��룡ÿ��һ��
/*int main()
{
	int i = 0;//iΪǰ�õ����м������ֵ
	int sum = 0;//sumΪ���������ĺ�
	int num, tmp;//numΪ��������������tmpΪ�����ÿһ������ֵ

	printf("Ҫ������ٸ�����");
	scanf("%d", &num);

	while (i < num)
	{
		printf("No.%d : ", ++i); //no��������ֵ���ᳬ���������������
		scanf("%d", &tmp); //��������
		sum += tmp;//���Ҹ�ֵ�����������ҵĵĽ����ֵ���������
	}
	
	printf("�ϼ�ֵ :%d \n", sum);
	printf("ƽ���� : %.2f", sum / (double)num);

	return 0;
}*/


//��ϰ4-9   ������do���ʵ�֣�
/*int main()
{
	int no;
		int i=1;
	printf("������1��������");
	scanf("%d", &no);

	while (i <= no)
	{
		
		if (i % 2 == 0)//ע��������iд��no!
			putchar('-');
		else
			putchar('+');
		i++;         //p89
	}
	return 0;
}*/

//��ϰ4-10

/*int main()
{
	int a, c;
	int b = 0;
	printf("������:"), scanf("%d", &a);
	do
	{
		b++;
		putchar('*');   //while (a > b++){puts("*");   �ڶ��ַ���
		

	} while (b < a);

			return 0;
}
*/


//����4-10
/*int main()
{
	int a;
	
	do
	{
		printf("������1��������:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a������Ĳ���������");

	} while (a <= 0);

	printf("������������ʾ�Ľ����:");
	while (a > 0)
	{
		printf("%d", a % 10);

		a /= 10;
	}
	puts("��");
	return 0;
}*/


//��ϰ4-11
/*int main()
{
	int a;

	do
	{
		printf("������1��������:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a������Ĳ���������");

	} while (a <= 0);

	printf("%d������ʾ�Ľ����:",a);   //�ڴ˲����������
	while (a > 0)
	{
		printf("%d", a % 10);

		a /= 10;
	}
	puts("��");
	return 0;
}*/

//��ϰ4-12
/*int main()
{
	int a;
int i=0;

	do
	{
		printf("������1��������:"), scanf("%d", &a);
		if (a <= 0)
			printf("\a������Ĳ���������");

	} while (a <= 0);

	printf("%d��λ����:", a);  
	while (a > 0)
	{
		
		//printf("%d", a % 10);

		a /= 10;
		
		i++;
	}
printf("%d", i);
	puts("��");
	return 0;
}*/