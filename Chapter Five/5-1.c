#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����5-1
/*int main()
{
	int a, b, c, d, e;
	int sum = 0;
	printf("������5��ѧ���ķ�����\n");
		printf("1��ѧ����"), scanf("%d", &a); sum += a;
		printf("2��ѧ����"), scanf("%d", &b); sum += b;
		printf("3��ѧ����"), scanf("%d", &c); sum += c;
		printf("4��ѧ����"), scanf("%d", &d); sum += d;
		printf("5��ѧ����"), scanf("%d", &e); sum += e;

		printf("�ܷ֣�%5d", sum);
		printf("ƽ���֣�%5.1f", sum / (double)5);
		return 0;
}*/


//����5-2
/*int main()
{
	int v[5];

	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;

	printf("v[0]=%d\n", v[0]);
	printf("v[1]=%d\n", v[1]);
	printf("v[2]=%d\n", v[2]);
	printf("v[3]=%d\n", v[3]);
	printf("v[4]=%d\n", v[4]);
	return 0;
}*/


//����5-3
/*int main()
{
	int a;
	int b[5];
                 
	for (a = 0; a < 5; a++)
		b[a] = a + 1;
	for (a = 0; a < 5; a++)
		printf("b[%d]=%d\n", a, b[a]);

	return 0;
                 
}*/


//����5-4
/*int main()
{
	int i;
	double v[7];

	for (i = 0; i < 7; i++)
		v[i] = 0.0;
	for (i = 0; i < 7; i++)
		printf("v[%d]=%.1f\n", i, v[i]);

	return 0;
}*/

//��ϰ5-1
/*int main()
{
	int a;
	int b[5];

	for (a = 0; a < 5; a++)
		b[a] = a;
	for (a = 0; a < 5; a++)
		printf("b[%d]=%d\n", a, b[a]);

	return 0;

}*/

//��ϰ5-2   �ص㣡
/*int main()
{
	int a;
	int b[5];

	for (a = 0; a < 5; a++)
		b[a] = 5-a;
	for (a = 0; a < 5; a++)
		printf("b[%d]=%d\n", a, b[a]);

	return 0;

}*/

//�����嵥5-5
/*int main()
{
	int a;
	int c[5] = { 1,2,3,4,5 };

	for (a = 0; a < 5; a++)
		printf("c[%d]=%d\n", a, c[a]);
	return 0;
}*/

//����5-6
/*int main()
{
	int c;
	int a[5] = { 17,23,36 };
	int b[5];

	for (c = 0; c < 5; c++)
		b[c] = a[c];

	puts("a\tb");
	puts("----------");
	for (c = 0; c < 5; c++)
		printf(" %4d %4d\n", a[c], b[c]);
	
	return 0;

}*/

//��ϰ5-3
/*int main()
{
	int a;
	int c[5] = { 5,4,3,2,1 };

	for (a = 0; a < 5; a++)
		printf("c[%d]=%d\n", a, c[a]);
	return 0;
}*/

//��ϰ5-4
/*int main()
{
	int c;
	int a[5] = { 17,23,36 };
	int b[5];

	for (c = 0; c < 5; c++)
		b[c] = a[5-c-1];

	puts("a\tb");
	puts("----------");
	for (c = 0; c < 5; c++)
		printf(" %4d %4d\n", a[c], b[c]);

	return 0;

}*/
//����ע���£�

//�����嵥5-7
/*int main()
{
	int a;
	int x[5];
	
	for (a = 0; a < 5; a++)
	{
		printf("x[%d]:", a);
		scanf("%d", &x[a]);
	}
	for (a = 0; a < 5; a++)
	{
		printf("x[%d]=%d\t", a, x[a]);
	}
	return 0;
}*/

//����5-8  �ص㣡
int main()
{
	int a;
	int V[7];

	for (a = 0; a < 7; a++){
		printf("V[%d]:", a);
		scanf("%d", &V[a]);
	}
	for (a = 0; a < 3; a++) {
		int s = V[a];
		V[a] = V[6 - a];
		V[6 - a] = s;

	}
	puts("�������к�Ľ����");
	for (a = 0; a < 7; a++)
		printf("V[%d]=%d\n", a, V[a]);

	return 0;

}