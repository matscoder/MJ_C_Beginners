//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

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
/*int main()
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

}*/

//����5-9
/*int main()
{
	int a;
	int tensu[5];
	int sum = 0;

	printf("������5��ѧ���ķ�����\n");
	for (a = 0; a < 5; a++) {
		printf("%2d��:", a + 1);
		scanf("%d", &tensu[a]);
		sum += tensu[a];

	}
	printf("�ܷ�:%5d\n", sum);
	printf("ƽ���֣�%5.1f\n", (double)sum / 5);

	return 0;
}*/

//����5-10
/*#define NUMBER 6 
int main()
{
	int a;
	int tensu[NUMBER];
	int sum = 0;

	printf("������%d��ѧ���ķ�����\n",NUMBER);
	for (a = 0; a < NUMBER ; a++) {
		printf("%2d��ѧ��:", a + 1);
		scanf("%d", &tensu[NUMBER]);
		sum += tensu[NUMBER];
		
	}
	printf("�ܷ�:%5d", sum);
	printf("ƽ����: %5.1f", sum / (double)NUMBER);
	return 0;
}*/

//����5-11
/*#define NUMBER 5
int main()
{
	int a;
	int tensu[NUMBER];
	int max, min;

	printf("������%d��ѧ���ķ���:\n", NUMBER);
	for (a = 0; a < NUMBER; a++) {
		printf("%2d��:", a+1);
		scanf("%5d", &tensu[a]);

	} 
	min = max = tensu[0];
	for (a = 1; a < NUMBER; a++) {
		if (tensu[a] > max) max = tensu[a];
		if (tensu[a] < min) min = tensu[a];
	}

	printf("��߷֣�%2d", max);
	printf("��ͷ֣�%2d", min);
}
*/

//��ϰ5-5    �������ݣ�  // ������һ�飡

/*#define NUMBER 7
int main()
{
	int a;
	int V[NUMBER];

	for (a = 0; a < NUMBER; a++) {
		printf("V[%d]:", a);
		scanf("%d", &V[a]);
	}
	for (a = 0; a < NUMBER/2; a++) {
		int s = V[a];
		V[a] = V[NUMBER - a-1];
		V[NUMBER - a-1] = s;

	}
	puts("�������к�Ľ����");
	for (a = 0; a < NUMBER; a++)
		printf("V[%d]=%d\n", a, V[a]);

	return 0;

}*/

//����5-12/////δ���
/*#define NUMBER 80

int main()
{
	int i, j;
	int num;
	int tesu[NUMBER];
	int bunpu[11] = { 0 };

	printf("������ѧ��������");
	do {
		scanf("%d", &num);
		if (num<1 || num>NUMBER)
			printf("\a ������1-%d ������:", NUMBER);
	} while (num<1 || num>NUMBER);

	printf("������%d�˵ķ�����\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d��:", i + 1);
		do {
			scanf("%2d", &tesu[i]);
			if (tesu[i] < 0 || tesu[i]>100)
				printf("\a������1-100�ķ���ֵ��");
		} while (tesu[i] < 0 || tesu[i > 100]);
		
	}

	puts("\n---�ֲ�ͼ---�ֲ�ͼ");
	printf("100:");

}*/

//��ϰ5-7
//#define NUMBER
//int main()
//{
//
//}
//
////��ϰ5-8
//
////��ϰ5-9