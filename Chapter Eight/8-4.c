//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//���ؽ׳˵�ֵ
/*int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int num;
	printf("������1������:");
	scanf("%d", &num);

	printf("%d�Ľ׳�Ϊ%d", num, factorial(num));

	return 0;
}*/


//��ϰ8-6 ��ʹ�õݹ�ʵ�ַǸ������Ľ׳�   ���н������

/*int main()
{
	int i, n,retry;
		int x=1;
	
	do {
		printf("������1���Ǹ�����:");
		scanf("%d", &n);
		if (n >= 0){
			for (i = n; i > 0; i--)
				x *= i;
			printf("%d �Ľ׳�Ϊ %d\n", n, x);
			
			printf("�Ƿ�������룿 ����---1  ������---0");
			scanf("%d", &retry);
		}
		else
		{
			printf("����������!\n");
			retry = 1;
		};
	} while (retry);
	printf("����ִ�����!");
	return 0;
}*/



//��ϰ8-7



//��ϰ8-8
/*int gcd(int x, int y)     //���Ƚ���x��y�����㣬����Ϊ0�����Ϊ���Լ��
                          //������Ϊ0 �������y��Ϊ��������������Ϊ����������һ������һ����������Ϊ���������ڶ�����������Ϊ�������Ӷ�ѭ������
{
	if (x % y == 0)
		return y;
	return gcd(y, x % y);
}

//������:��ѭ��ʵ��
//int gcd(int a, int b)
//{
//	int c; c = a % b; //(a>b);
//		while (c != 0) {
//			a = b; b = c; c = a % b;
//		}
//	return b;
//}
int main()
{
	int x, y;
	printf("������������ֵ:"), scanf("%d  %d", &x, &y);
	printf("���ǵ����Լ����:%d", gcd(x, y));

	return 0;
}
*/
