#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����嵥10-4
/*void hiroko(int* height)
{
	if (*height < 180)
		*height = 180;
}

int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	hiroko(&masaki);

	printf("���۵���ߣ�%d\n", sato);
	printf("�ֻ�����ߣ�%d\n", sanaka);
	printf("����A�ε���ߣ�%d\n", masaki);
}*/


//�����嵥10-5
/*void sum_diff(int n1, int n2, int* sum, int* diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;

}

int main()
{
	int na, nb;
	int wa = 0, sa = 0;//�ֱ��Ӧ�����

	puts("��������������");
	printf("����A:"), scanf("%d", &na);
	printf("����B:"), scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);

	printf("����֮����%d,֮����%d��\n", wa, sa);

	return 0;
}*/

//����10-6

/*void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int na, nb;
	puts("��������������:");
	printf("����1:"), scanf("%d", &na);
	printf("����2:"), scanf("%d", &nb);

	swap(&na, &nb);

	puts("������������ֵ");
	printf("����A��:%d\n", na);
	printf("����B��:%d\n", nb);

	return 0;

}*/

//��ϰ10-1
/*void adjust_point(int* n)
{
	if (*n < 0)
		*n = 0;
	if(*n > 100)
		* n = 100;
	
	

}

int main()
{
	int a;
	printf("����1������:"), scanf("%d", &a);
	adjust_point(&a);
	printf("a��ֵ��:%d\n", a);

	return 0;
}
*/


//��ϰ10-2


//�����嵥10-7
/*void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

void sort2(int* n1, int* n2)
{
	if (*n1 > *n2)
		swap(n1, n2);//��n1>n2,��n1��n2��ֵ��������֤���������ʽ���
}

int main()
{
	int na, nb;
	printf("��������������:\n");
		printf("��һ������:"), scanf("%d", &na);
		printf("�ڶ�������:"), scanf("%d", &nb);
		sort2(&na, &nb);
		
		puts("��������ֵ����������");
		printf("����1:%d\n", na);
		printf("����2:%d\n", nb);

		return 0;
}*/

//��ϰ10-3  //���޷����У�ʲôԭ�򣿣���
//����1:ʹ��һ������ʽ��
void sort3(int* n1, int* n2, int* n3)
{
	int tmp;
	if (*n1 > *n2)
	{
		tmp = *n1;
		*n1 = *n2;
		*n2 = tmp;
	}

	if (*n1 > *n3)
	{
		tmp = *n1;
		*n1 = *n3;
		*n3 = tmp;
	}

	if (*n2 > *n3)
	{
		tmp = *n2;
		*n2 = *n3;
		*n3 = tmp;
	}
}

//����2: ��������ֵ����������ķ����ֱ�����һ��
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort4(int* n1, int* n2, int* n3) {
	if (*n1 > *n2)
		swap(n1, n2);
	if (*n1 > *n3)
		swap(n1, n3);
	if (*n2 > *n3)
		swap(n2, n3);
}
int main()
{
	int a, b, c;
	puts("������3������:");
	printf("����a��"), scanf("%d", &a);
	printf("����b��"), scanf("%d", &b);
	printf("����c��"), scanf("%d", &c);

	sort4(&a, &b, &c);

	printf("�������������к�Ľ��Ϊ: ");
	printf("��һ������:%d\n�ڶ�������:%d\n����������:%d\n",a,b,c);

		return 0;
}