#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����4-11
/*int main()
{
	int a,i;
	printf("������1��������:"), scanf("%d", &a);
	for (i = 0; i <= a; i++)
		printf("%d ", i);
	putchar('\n');
}
*/
//����4-12
/*int main()
{
	int a, b;
	printf("������:"), scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		putchar('*');
		putchar('\n');
	}
		

	return 0;
}*/


//����4-13
/*int main()
{
	int num, sum=0;  //num���������������sum ��  
	int i ,a;      //aΪÿ�����������
	printf("������ٸ�����:"), scanf("%d", &num);
	while (num < 0) {
		printf("������������!\n");
			printf("����������:"), scanf("%d", &num);
	}
	for (i = 0; i < num; i++)            //��ִ��ѭ���壬��ִ����β����  ��<=һ�����һλ��<��ʱ������i=num,<=ʱ,i��num��һλ��������ϸд
	{
		printf("NO.%d:", i+1 ), scanf("%d", &a);          // i�����   i=0,1  i=1,2  i=2,3   i=3,4  i=4,5  i=6,  7  
		sum += a;
	}
	printf("�ϼ�ֵ:%d\nƽ��ֵ:%.2f\n", sum, (double)sum / num);
}*/


//��ϰ4-13
int main()
{
	int a, b;
	int	sum=0;
	printf("������n��ֵ:"), scanf("%d", &a);

	for (b = 0; b < a; b++)    0,1,1  1,3,2
	{
		printf("NO.%d:%d\t", b + 1,b+1);
		sum += b + 1;
	}
	printf("1��%d�ĺ���%d", a, sum);
	return 0;
}


//��ϰ4-14
/*int main()    //ȡ�����
{
	int a, b,c;
	printf("����1������"), scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		c = b % 10;
		printf("%d",c);
		if (c == 0)
			printf("\n");
	}
	return 0;
}*/



//��ϰ4-15   //���˽��������������صĹ�ʽ   (i-80  *0.7)
/*int main()
{
	int a, b, c;
	printf("��ʼ��ֵ:"), scanf("%d", & a);
	printf("������ֵ:"), scanf("%d", &  b);
	printf("�����ֵ:"), scanf("%d", & c);

	int g;
 double t;
	for (g = a; g <= b; g += c)
	{
		t = (g - 80) * 0.7;
		printf("�����:%d cm\t ������:%.2fkg\n", g,t );
	}
	return 0;

}
*/


//����4-14

//int main()
//{
//	int a, i;
//	printf("����1������ֵ:"), scanf("%d", &a);
//
//	//����1��ʹ��if���
//	/*for (i = 1; i <= a; i++)    //i=1   <=Ӧ��Ӧ����?
//	{
//		if (i % 2 == 0)
//			printf("%d\t", i);
//	}*/
//	//����2��for�����ֱ��ʹ�ø��������
//	for (i = 2; i <= a; i += 2)   //i=2,  <=Ӧ��Ӧ����?���������ֵ���µ���ż������Ӧ�ð��������������
//		printf("%d", i);
//	return 0;
//}

//����4-15
/*int main()
{
	int a, b;
	printf("������1������ֵ:"), scanf("%d", &b);

	for (a = 1; a <= b; a++)   //a<=b,������a���b��1�������<,�ֻ��޷�������������Լ��ֵ
		if (b % a == 0)
			printf("%d\n\t", a);    

	return 0;
}*/

//��ϰ4-16

/*int main()
{
	int a, b;
	printf("����1������ֵ:"), scanf("%d", &b);
	for (a = 1; a < b; a++)
		//������while,���������ѭ��
		//while (a % 2 == 1)
			//printf("%d", a);
		if (a % 2 == 1)
			printf("%d ", a);
	return 0;
}*/


//��ϰ4-17
/*int main()
{
	int a, b;
	printf("����n��ֵ:"), scanf("%d", &a);
	for (b = 1; b <= a; b++)
		printf("%d�Ķ��η���%d \n", b, b * b);

	return 0;
}*/

//��ϰ4-18
/*int main()
{
	int b,i;
printf("��ʾ���ٸ�*:"), scanf("%d", &b);
for (i = 1; i <= b; i++)
{
	
	putchar('*');
if (i %5== 0)
		putchar('\n');
}

return 0;
}*/

//��ϰ4-19
/*int main()
{
	int a, i;
	int b = 0;
	printf("��������ֵ:"), scanf("%d", &a);

	for (i = 1; i <= a; i++)
		/*while (a % i == 0)   //while��������ѭ����һ������ֵ��Լ��1
		{
			printf("%d", i);
			b++;
		}*/

		/*if (a % i == 0)
		{
			printf("%d \n", i);
			b++;
		}
	printf("Լ����%d��", b);
}*/