#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����9-1 ��ʾ�ַ����������ĳ���
/*
int main()
{
	printf("sizeof(\"123\")= %u\n ", (unsigned)sizeof("123"));
	printf("sizeof(\"AB\\tC\")= %u\n ", (unsigned)sizeof("AB\tC"));
	printf("sizeof(\"abc\\0def\")= %u\n ", (unsigned)sizeof("abc\0def"));
}*/


//�����嵥9-2  ���ַ����洢�������в���ʾ(��һ����ֵ)

/*int main()
{
	char str[4];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = '\0';

	printf("�ַ���strΪ \"%s\"�� \n", str);

	return 0;
}*/

//�����嵥9-3 ���ַ����洢�������в���ʾ �����:��ʼ����

/*int main()
{
	char str[]="ABC";//��{"ABC"}����Ч


	printf("�ַ���strΪ \"%s\"�� \n", str);

	return 0;
}*/

//��ϰ9-1
/*int main()
{
	char str[] = "ABC\0DEF";  //��Ԫ�ز����ַ������м����\0  ��p268ҳ ��ĩβ��null�ַ�\0���ַ��������ı�־


	printf("�ַ���strΪ \"%s\"�� \n", str);

	return 0;
}
*/
//�����嵥9-4
//ѯ�����ֲ���ʾ�ʺ����ȡ�ַ�����

/*int main()
{
	char name[48];

	printf("��������������:");
	scanf("%s", name);//ע�⣬��scanf�����У��˴���name���鲻��&�����

	printf("%s", name);

	printf("���ã�%s����/Ůʿ ����\n",name);

	return 0;
}*/

//��ϰ9-2 
/*int main()
{
	char s[] = "\0ABC";//"\0ABC"
		//����2:  s[0]='\0';
	
	printf("�ַ���s = %s", s);

	return 0;
}*/

//�����嵥9-5
//��ʽ���ַ�����12345������ʾ
/*int main()
{
	char str[] = "12345";

	printf("%s\n", str);
	printf("%3s\n", str);
	printf("%.3s\n", str);
	printf("%8s\n", str);
	printf("%-8s\n", str);

	return 0;
}*/