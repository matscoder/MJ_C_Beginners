#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����6-17
/*int x = 75; //�ļ�������

void print_x(void)
{
	printf("x=%d\n", x);

}

int main()
{
	int i;
	int x = 999; //��������
	
	
	print_x();

	for (i = 0; i < 5; i++) {
		int x = i * 100;   //��������
		printf("x=%d\n", x);
	}

	printf("x = %d\n", x);

	return 0;
}*/


//����6-18
/*int fx = 0;  //��̬�洢��+�ļ�������

void func(void)
{
	static int sx = 0;  //��̬�洢��+��������
	int ax = 0;           //�Զ��洢��+��������

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main()
{
	int i;

	puts(" ax  sx  fx  ");
	puts("----------------");
	for (i = 0; i < 10; i++)
		func();
	puts("-----------------");

	return 0;
}*/


//����6-19
/*int fx;

int main()
{
	int i;
	static int si;
	static double sd;
	static int sa[5];

	printf("fx=%d\n", fx);
	printf("si=%d\n",si );
	printf("sd=%f\n", sd);

	for (i = 0; i < 5; i++) {
		printf("sa[%d] = %d ", i, sa[i]);
	}

	return 0;
}
*/
//��ϰ6-14

/*int main()
{
	double static x[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("x[%d] = %d\n", i, x[i]);

		
	}
	return 0;
}*/

//��ϰ6-15

/*void put_count()
{
	static int i=0;
	i++;
		printf("put_count : ��%d��\n\a",i);

}
int main() {

	int i;
	int n = 5;
	for (i = 0; i < n; i++) {
		put_count();
	}
	return 0;   
}*/

//�ܽ��һ��:
/*double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main()
{
	int a, b;
	printf("��������������: ");
	printf("����1: �� ����2 : "), scanf("%d%d", &a, &b);
	printf("ƽ��ֵ��%.1f", ave2(a, b));

	return 0;
}*/

//�ܽ�ڶ���:3.c  ��ʵ������ʽ��������a������Ԫ�ص�ƽ��ֵ
/*double ave_ary(const int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return (double)sum / n;
}

int main()
{
	int i;
	int a[5];
	for (i = 0; i < 5; i++){
		printf("a[%d]: ", i + 1), scanf("%d",& a[i]);
		putchar('\n');
	}
	printf("����a����Ԫ��ƽ��ֵ��:%.1f",ave_ary(a, 5));

	return 0;
}
*/


//�ܽ������ 5.c

/*#define NUMBER 5
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
		printf("a[%d]:%d ", i,a[i]);
	}
}

int main()
{
	int a[NUMBER];
	int b[NUMBER];
	int i,n;
	printf("����b��Ԫ�طֱ���:\n");
	for (i = 0; i < NUMBER; i++)
	{
		printf("b[%d]:", i + 1), scanf("%d", &b[i]);
		putchar('\n');
	}

	printf("������b�Ķ��ٸ�Ԫ�ظ��Ƹ�����a��"), scanf("%d", &n);
	printf("����a���ƺ��ֵΪ:");
	cpy_ary(a, b, n);

	return 0;

}*/


//�ܽ������:
int sum_ary2D(const int a[][3], int n)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		int i, j;
		int sum = 0;

		for (i = 0; i < n; i++)
			for (j = 0; j < 3; j++)
				sum += a[i][j];
		return sum;
	}
}

	int main()
		{
		int i, j;
		int a[5][3];
		printf("����a[5][3]��ֵ�ֱ���:");
		for (i = 0; i < 5; i++)
			for (j = 0; j < 3; j++) {
		printf("a[%d][%d] : ",i,j), scanf("%d", &a[i][j]);
	}
		printf("��ά����a�����й���Ԫ�ص��ܺ���:%d", sum_ary2D(a[5][3], 5));
	}