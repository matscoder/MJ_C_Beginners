#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����嵥9-8 �ж��ַ����ĳ���
/*int str_length(const char s[])
{
	int len = 0;
	while (s[len])  //s[len]��0 ʱ������ѭ����len��ʼֵΪ0������������null�ַ�Ϊֹ;
		len++;
	return len;
}

int main()
{
	char str[128];
	printf("�������ַ���:");
	scanf("%s", str);
	printf("�ַ���\"%s\"�ĳ�����%d��\n", str, str_length(str));  //�������ַ���GT5Ϊ����������null�ַ�ʱ����Ϊ3,����whileѭ������

}*/

//��ϰ9-4
/*void null_string(char s[]) {
	
	s[0] = '\0';
	printf("�ַ���sΪ%s", s);
}
int main()
{
	char s[] = "HELLOWORLD";
		null_string(s);
		return 0;

}*/


//��ϰ9-5   //�����⣡��������ʾc�ڴ�δ��ʼ�����ֲ�����cδ��ʼ��
/*int str_char(const char s[], int c)
{
	int a = 0;    //��ʾ�ַ�������:��������Ϊĳ��ֵ��Ԫ�ص��±�
	while (s[a]) {
		if (s[a] == c)
			return a;
		a++;
	}
	return -1;

}
int main()
{
	char c;
	char s[] = "hellochina";

	printf("�ַ�c���ַ��� \"%s\"�е��±�Ϊ:%d", s, str_char(s, c));
	
	return 0;
}*/


//��ϰ9-6
/*int str_chnum(const char s[], int c)
{
	int a = 0, b = 0;
	while (s[a])
	{
		if (s[a] == 'c')
			b++;
		a++;
	}
		return b;

		if (b == 0)
			return 0;
}
int main()
{
	char c = 'c';
	char s[] = "hellochinanancang";
	printf("�ַ���\"%s\"��\'%c\'�ַ��ĸ���Ϊ%d", s, c, str_chnum(s, c));

	return 0;
}*/


//�����嵥9-9  �����ַ�������ʾ
/*void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}
int main()
{
	char str[128];

	printf("�������ַ���:");
	scanf("%s", str);
	
	printf("��������");
	put_string(str);
	printf("��\n");
}*/

//��ϰ9-7//����ʵ�ֵģ���������
/*void put_stringn(const char s[], int n)
{
	int num, i = 0;

	for (num = 0; num < n; num++){

		while (s[i])
		{
			putchar(s[i++]);
		}
		i=0;
	}

	return 0;
}

int main()
{
	char s[] = "����Ӱ����֮����";
	int n = 100;
	put_stringn(s, n);

	return 0;
}*/

//��ϰ9-8 ʵ���ַ������������
void put_stringr(const char s[]) {
	int num = 0, i = 0;
	while (s[num])   //ȷ�������Ԫ�ظ���
		num++;
	while (i < num) {
		putchar(s[num - i - 1]);  5-0-1,5-1-1...ʵ���������
		i++;
	}

}

int main()
{
	char s[] = "hello";
	put_stringr(s);

	return 0;
}


//�����嵥9-10
//�����ַ��ĳ��ִ���

