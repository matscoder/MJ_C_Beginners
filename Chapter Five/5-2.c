#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main()
{
	int a, b;
	int tensu1[4][3] = { {91,63,78},{67,72,46},{89,34,53},{ 32,54,34} };
	int tensu2[4][3] = { {97,67,82},{73,43,46},{97,56,21},{ 85,46,35} };
	int sum[4][3];     //�ܷ�

	//�����ο��Է���֮��
	for (a = 0; a < 4; a++) {   //4��ѧ����
		for (b = 0; b < 3; b++)  //3�ſγ̵�
			sum[a][b] = tensu1[a][b] + tensu2[a][b];  //���εķ������
	}

	//��ʾ��һ�ο��Եķ���
	puts("��һ�ο��Եķ���:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", tensu1[a][b]);
		putchar('\n');
	}

	//��ʾ�ڶ��ο��Եķ���
	puts("�ڶ��ο��Եķ���:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", tensu2[a][b]);
		putchar('\n');
	}

	//��ʾ�ܷ�
	puts("�ܷ�:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", sum[a][b]);
		putchar('\n');
	}

	return 0;
}*/


//��ϰ5-10   //Ϊʲô���ܺ���������Σ�
#define a 4
#define b 3

int main()
{
	int la[a][b];
	int lb[b][a];
	int i, j;
	printf("������1��%d��%d�о����ֵ:\n",a,b);

	for (i = 0; i < a; i++) {
		printf("��%d��:",i + 1);
		for (j = 0; j < b; j++){
			scanf("%d", &la[i][j]);
		
		}
	}

	printf("������1��%d��%d�о����ֵ:", b, a);
	for (i = 0; i < b; i++) {
		printf("��%d�У�", i + 1);
		for (j = 0; j < a; j++){
			scanf("%d", &lb[i][j]);
		
		}
	}

	for (i = 0; i < a; i++) {
		printf("��%d�У�", i + 1);
		for (j = 0; j < b; j++){
			printf("%d", la[i][j] * lb[j][i]);
			
		}
	}

	return 0;

}


//��ϰ5-11
#define xs 6
#define cj 2

int main()
{
	int ln1[xs][cj];
	int ln2[xs][cj];
	int i, j;
	for (i = 0; i < 6; i++) {
		printf("��%d��ѧ���ķ���:", i + 1);
		for (j = 0; j++; j < 2)
			scanf("%d", &ln1[i][j]);
	}
}

//��ϰ5-12.
//�ܽ�����