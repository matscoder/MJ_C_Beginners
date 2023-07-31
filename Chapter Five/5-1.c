//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//代码5-1
/*int main()
{
	int a, b, c, d, e;
	int sum = 0;
	printf("请输入5名学生的分数：\n");
		printf("1号学生："), scanf("%d", &a); sum += a;
		printf("2号学生："), scanf("%d", &b); sum += b;
		printf("3号学生："), scanf("%d", &c); sum += c;
		printf("4号学生："), scanf("%d", &d); sum += d;
		printf("5号学生："), scanf("%d", &e); sum += e;

		printf("总分：%5d", sum);
		printf("平均分：%5.1f", sum / (double)5);
		return 0;
}*/


//代码5-2
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


//代码5-3
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


//代码5-4
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

//练习5-1
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

//练习5-2   重点！
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

//代码清单5-5
/*int main()
{
	int a;
	int c[5] = { 1,2,3,4,5 };

	for (a = 0; a < 5; a++)
		printf("c[%d]=%d\n", a, c[a]);
	return 0;
}*/

//代码5-6
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

//练习5-3
/*int main()
{
	int a;
	int c[5] = { 5,4,3,2,1 };

	for (a = 0; a < 5; a++)
		printf("c[%d]=%d\n", a, c[a]);
	return 0;
}*/

//练习5-4
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
//着重注释下！

//代码清单5-7
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

//代码5-8  重点！
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
	puts("倒序排列后的结果：");
	for (a = 0; a < 7; a++)
		printf("V[%d]=%d\n", a, V[a]);

	return 0;

}*/

//代码5-9
/*int main()
{
	int a;
	int tensu[5];
	int sum = 0;

	printf("请输入5名学生的分数。\n");
	for (a = 0; a < 5; a++) {
		printf("%2d号:", a + 1);
		scanf("%d", &tensu[a]);
		sum += tensu[a];

	}
	printf("总分:%5d\n", sum);
	printf("平均分：%5.1f\n", (double)sum / 5);

	return 0;
}*/

//代码5-10
/*#define NUMBER 6 
int main()
{
	int a;
	int tensu[NUMBER];
	int sum = 0;

	printf("请输入%d名学生的分数：\n",NUMBER);
	for (a = 0; a < NUMBER ; a++) {
		printf("%2d号学生:", a + 1);
		scanf("%d", &tensu[NUMBER]);
		sum += tensu[NUMBER];
		
	}
	printf("总分:%5d", sum);
	printf("平均分: %5.1f", sum / (double)NUMBER);
	return 0;
}*/

//代码5-11
/*#define NUMBER 5
int main()
{
	int a;
	int tensu[NUMBER];
	int max, min;

	printf("请输入%d名学生的分数:\n", NUMBER);
	for (a = 0; a < NUMBER; a++) {
		printf("%2d号:", a+1);
		scanf("%5d", &tensu[a]);

	} 
	min = max = tensu[0];
	for (a = 1; a < NUMBER; a++) {
		if (tensu[a] > max) max = tensu[a];
		if (tensu[a] < min) min = tensu[a];
	}

	printf("最高分：%2d", max);
	printf("最低分：%2d", min);
}
*/

//练习5-5    着重推演！  // 再运行一遍！

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
	puts("倒序排列后的结果：");
	for (a = 0; a < NUMBER; a++)
		printf("V[%d]=%d\n", a, V[a]);

	return 0;

}*/

//代码5-12/////未解决
/*#define NUMBER 80

int main()
{
	int i, j;
	int num;
	int tesu[NUMBER];
	int bunpu[11] = { 0 };

	printf("请输入学生人数：");
	do {
		scanf("%d", &num);
		if (num<1 || num>NUMBER)
			printf("\a 请输入1-%d 的数字:", NUMBER);
	} while (num<1 || num>NUMBER);

	printf("请输入%d人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号:", i + 1);
		do {
			scanf("%2d", &tesu[i]);
			if (tesu[i] < 0 || tesu[i]>100)
				printf("\a请输入1-100的分数值：");
		} while (tesu[i] < 0 || tesu[i > 100]);
		
	}

	puts("\n---分布图---分布图");
	printf("100:");

}*/

//练习5-7
//#define NUMBER
//int main()
//{
//
//}
//
////练习5-8
//
////练习5-9