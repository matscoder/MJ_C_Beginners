#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码10-9 显示数组元素的地址(指向元素的指针)
/*int main()  //结果为什么是16进制？
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int *p = a; //p指向a[0]
	
	for (i = 0; i < 5; i++)
		printf("&a[%d] = %p  p+%d=%p\n", i, &a[i], i, p + i);

	return 0;
}*/

//代码清单10-10
/*int main()
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int* p = a;  //p指向a[0]

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d  *(a+%d)= %d  p[%d]=%d  *(p+%d)= %d\n  ", i, a[i], i, *(a + i), i, p[i], i, *(p + i));
	for(i=0; i<5; i++)
		printf("a[%d] = %p  (a+%d)= %p  &p[%d]=%p  (p+%d)= %p\n  ", i, &a[i], i, (a + i), i, &p[i], i, (p + i));

	return 0;
}*/


//代码10-11
//数组的传递

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



//练习10-4  
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
	printf("请输入数组的大小:");
	scanf("%d", &n);

	set_idx(v, n);

	for (i = 0; i < n; i++)
		printf("%d", v[i]);
}*/


//练习10-5   将代码10-11导入为a[2]的指针
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


//总结题目:
#define NUMBER 5
//交换px和py所指对象的值
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
//冒泡排序法
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
	printf("请输入%d人的分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d号:", i + 1);
		scanf("%d", &point[i]);
	}
	bsort(point, NUMBER);
	puts("按升序排列。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号:%d\n", i + 1, point[i]);
	return 0;
}