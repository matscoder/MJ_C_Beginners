#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main()
{
	int a, b;
	int tensu1[4][3] = { {91,63,78},{67,72,46},{89,34,53},{ 32,54,34} };
	int tensu2[4][3] = { {97,67,82},{73,43,46},{97,56,21},{ 85,46,35} };
	int sum[4][3];     //总分

	//求两次考试分数之和
	for (a = 0; a < 4; a++) {   //4名学生的
		for (b = 0; b < 3; b++)  //3门课程的
			sum[a][b] = tensu1[a][b] + tensu2[a][b];  //两次的分数相加
	}

	//显示第一次考试的分数
	puts("第一次考试的分数:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", tensu1[a][b]);
		putchar('\n');
	}

	//显示第二次考试的分数
	puts("第二次考试的分数:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", tensu2[a][b]);
		putchar('\n');
	}

	//显示总分
	puts("总分:");
	for (a = 0; a < 4; a++) {
		for (b = 0; b < 3; b++)
			printf("%4d", sum[a][b]);
		putchar('\n');
	}

	return 0;
}*/


//练习5-10   //为什么不能横向输出矩形？
#define a 4
#define b 3

int main()
{
	int la[a][b];
	int lb[b][a];
	int i, j;
	printf("请输入1个%d行%d列矩阵的值:\n",a,b);

	for (i = 0; i < a; i++) {
		printf("第%d行:",i + 1);
		for (j = 0; j < b; j++){
			scanf("%d", &la[i][j]);
		
		}
	}

	printf("请输入1个%d行%d列矩阵的值:", b, a);
	for (i = 0; i < b; i++) {
		printf("第%d行：", i + 1);
		for (j = 0; j < a; j++){
			scanf("%d", &lb[i][j]);
		
		}
	}

	for (i = 0; i < a; i++) {
		printf("第%d行：", i + 1);
		for (j = 0; j < b; j++){
			printf("%d", la[i][j] * lb[j][i]);
			
		}
	}

	return 0;

}


//练习5-11
#define xs 6
#define cj 2

int main()
{
	int ln1[xs][cj];
	int ln2[xs][cj];
	int i, j;
	for (i = 0; i < 6; i++) {
		printf("第%d名学生的分数:", i + 1);
		for (j = 0; j++; j < 2)
			scanf("%d", &ln1[i][j]);
	}
}

//练习5-12.
//总结题型