#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����10-9 ��ʾ����Ԫ�صĵ�ַ(ָ��Ԫ�ص�ָ��)
/*int main()  //���Ϊʲô��16���ƣ�
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int *p = a; //pָ��a[0]
	
	for (i = 0; i < 5; i++)
		printf("&a[%d] = %p  p+%d=%p\n", i, &a[i], i, p + i);

	return 0;
}*/

//�����嵥10-10
/*int main()
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int* p = a;  //pָ��a[0]

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d  *(a+%d)= %d  p[%d]=%d  *(p+%d)= %d\n  ", i, a[i], i, *(a + i), i, p[i], i, *(p + i));
	for(i=0; i<5; i++)
		printf("a[%d] = %p  (a+%d)= %p  &p[%d]=%p  (p+%d)= %p\n  ", i, &a[i], i, (a + i), i, &p[i], i, (p + i));

	return 0;
}*/


//����10-11
//����Ĵ���

/*void ary_set(int v[], int n, int val)
{
	int i;
	for (i = 0; i < n; i++)
		v[i] = val;
}
int main()
{
	int i;
	int a[] = { 1,2,3,4,5 };

	ary_set(a, 5, 99);

	for (i = 0; i < 5; i++)
		printf("a[%d]=%d\n", i, a[i]);

	return 0;
}*/



//��ϰ10-4  
/*void set_idx(int* v, int n)
{
	int idx = 0;
	for (idx = 0; idx < n; idx++)
		v[idx] = idx;
}
int main()
{
	int n,  i;
	
		int v[10] = { 0 };
	printf("����������Ĵ�С:");
	scanf("%d", &n);

	set_idx(v, n);

	for (i = 0; i < n; i++)
		printf("%d", v[i]);
}*/


//��ϰ10-5   ������10-11����Ϊa[2]��ָ��
/*void ary_set(int v[], int n, int val)
{
	int i;
	for (i = 0; i < n; i++)
		v[i] = val;
}
int main()
{
	int i;
	int a[] = { 1,2,3,4,5 };

	ary_set(&a[2], 2, 99);

	for (i = 0; i < 5; i++)
		printf("a[%d]=%d\n", i, a[i]);

	return 0;
}*/


//�ܽ���Ŀ:
#define NUMBER 5
//����px��py��ָ�����ֵ
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
//ð������
void bsort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > 1; j--)
			if (a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
	}
}
int main()
{
	int i;

	int point[NUMBER];
	printf("������%d�˵ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d��:", i + 1);
		scanf("%d", &point[i]);
	}
	bsort(point, NUMBER);
	puts("���������С�");
	for (i = 0; i < NUMBER; i++)
		printf("%2d��:%d\n", i + 1, point[i]);
	return 0;
}