#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������  �����嵥6-1
/*int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int n1, n2;
	puts("��������������");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);

	printf("�ϴ��������ֵ��%d", max2(n1, n2));

	return 0;

}*/

//����ֻʹ��һ��return ����ֵʱ�����:
//1.
/*int max2(int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;

	return max;
}

//2.
int max2(int a, int b)
{
	int max = a;
	if (b > max)
		max = b;
	return max;
}

//3.
int max2(int a, int b)
{
	return (a > b) ? a : b;
}

*/

//����6-2
/*int max3(int a, int b, int c)
{
	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	//����2���α�����
	int max = a;
	if (b>max)
		max = b;
	if (c>max)
		max = c;
}
int main()
{
	int a, b, c;
	printf("������3��������\n");
	printf("����a:"), scanf("%d", &a);
	printf("����b:"), scanf("%d", &b);
	printf("����c:"), scanf("%d", &c);

	printf("���ֵ��:%d", max3(a, b, c));
}*/


//��ϰ1:
/*#define NUMBER 2
int min2(int a, int b)
{
	int min = a;
	if (min > b)
		min = b;
	//return (a>b)?b:a;

	return min;
}

int main()
{
	int a, b;
	printf("������%d������:\n",NUMBER);
	printf("����1:"), scanf("%d", &a);
	printf("����2:"), scanf("%d", &b);

	printf("��Сһ����ֵ��:%d", min2(a, b));

	return 0;

}*/

//��ϰ6-2
/*#define NUMBER 3
int min3(int a, int b,int c)
{
	//int min = a;
	//if (min > b)
	//	min = b;
	//if (min > c)
	//	min = c;
	return (a>b)?((b>c)?c:b):((a>c)?c:a);

	//return min;
}

int main()
{
	int a, b,c;
	printf("������%d������:\n", NUMBER);
	printf("����1:"), scanf("%d", &a);
	printf("����2:"), scanf("%d", &b);
	printf("����3:"), scanf("%d", &c);

	printf("��Сһ����ֵ��:%d", min3(a, b, c));

	return 0;

}*/

//����6-3
/*#define NUMBER 2

//����x��ƽ��
int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return ((a > b) ? a - b : b - a);
}

int main()
{
	int X, Y;
	printf("������%d������:\n",NUMBER);
	printf("����X:"), scanf("%d", &X);
	printf("����Y:"), scanf("%d", &Y);

	printf("X��Y��ƽ������%d", diff(sqr(X), sqr(Y)));

	return 0;
}*/

//��ϰ6-3
/*int cube(int x)
{
	return x * x * x;
}

int main()
{
	int x;
	printf("������һ������:"), scanf("%d", &x);
	printf("��������������:%d", cube(x));

	return 0;
}*/

//����6-3
/*int max2(int a, int b)
{
	return a > b ? a : b;
}
int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}

int main()
{
	int n1, n2, n3, n4;
	printf("������4������\n");
	printf("����1:"), scanf("%d", &n1);
	printf("����2:"), scanf("%d", &n2);
	printf("����3:"), scanf("%d", &n3);
	printf("����4:"), scanf("%d", &n4);

	printf("���ֵ��%d", max4(n1, n2, n3, n4));

	return 0;
}*/

//	��ϰ6-4
/*int sqr(int x)
{
	return(x * x);
}
int pow4(int x)
{
	return (sqr(x) * sqr(x));
}

int main()
{
	int a;
	printf("������1������:\n"), scanf("%d", &a);

	printf("���������Ĵ�����:%d", pow4(a));

	return 0;
}*/


//����6-5
/*double power(double x, int n)//x�ǵ�����n��ָ��
{
	int i;
	double tmp = 1.0;
	for (i = 1; i <= n; i++)
		tmp *= x;   //tmp��Ϊ�������ı�������i=1ʱ��x��ָ��Ϊ1����tmp=x��1�η�=x��   tmp���ܵ���x,1.tmp=xʱ���������ʽѭ�����Ƿ���Է�Χ����1 i<n�� 2.x=0ʱ��Ϊʲôָ����Ҳ���Ϊ0�������tmp=1.0(Ϊʲô��)
	return tmp;                 //��tmp=xʱ,n=1,i<n,i=1,��for������,��ֱ��tmp=x���  ��Ϊʲô����tmp=x?
}
int main()
{
	double a;
	int  b;
	printf("��a��b����:\n");
	printf("ʵ��a:"), scanf("%lf", &a);
	printf("����b:"), scanf("%d", &b);

	printf("%.2f��%2d������:%.2f", a,b,power(a, b));
}*/

//����6-6   ��6-5�ݺ�������һ�ַ���   ����tmp=x,while(n-->0),n=1,��ɳ���
/*double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;
	return tmp;
}
int main()
{
	double a;
	int  b;
	printf("��a��b����:\n");
	printf("ʵ��a:"), scanf("%lf", &a);
	printf("����b:"), scanf("%d", &b);

	printf("%.2f��%2d������:%.2f", a, b, power(a, b));
}*/


//��ϰ6-5
int sump(int n)
{
	int i=1;
	int tmp=0 ;
	//for (i = 1; i <= n; i++) //�������
	//	tmp += i;
	//return tmp;
	//����2  �������
	//while(n>0)     
	//sum += n;
	//n--;
//������:ʹ��while����������:
	while (i <= n){
	tmp += i; 
	i++;
	}
	return tmp;
}
int main()
{
	int a;
	printf("����1������:"), scanf("%d", &a);
	printf("1��������֮�����������ĺ�Ϊ:%d", sump(a));

	return 0;
}









































