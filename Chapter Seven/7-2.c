/*#include <stdio.h>
#include <limits.h>*/

//����7-1
/*int main()
{
	puts("�û����¸��ַ��ͣ�������ֵ�ķ�Χ");
	printf("char   :%d-%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char   :%d-%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char   :%d-%d\n", 0, UCHAR_MAX);

	printf("short   :%d-%d\n", SHRT_MIN, SHRT_MAX);
	printf("int     :%d-%d\n", INT_MIN, INT_MAX);
	printf("long    :%d-%d\n", LONG_MIN, LONG_MAX);

	printf("unsigned short   :%u-%u\n", 0, USHRT_MAX);
	printf("unsigned         :%u-%u\n", 0, UINT_MAX);
	printf("unsigned long    :%u-%u\n", 0, ULONG_MAX);

	return 0;



}*/

//����7-2

/*int main()
{
	printf("����������е�char����:");

	if (CHAR_MIN)
		puts("�з��ŵ�");
	else
		puts("�޷��ŵ�");

	return 0;
}*/


//����7-3 ��ʾ�ַ��ͺ����͵ĳ���

/*int main()
{
	printf("sizeof(char) = %u\n", (unsigned)sizeof(char));
	printf("sizeof(short) = %u\n", (unsigned)sizeof(short));
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof(long) = %u\n", (unsigned)sizeof(long));

	return 0;
}*/

//����7-4
//��ʾ�������ͺͱ����ĳ���
/*int main()
{
	int na, nb;
	double dx, dy;
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof(double) = %u\n", (unsigned)sizeof(double));

	printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
	printf("sizeof(dx) = %u\n", (unsigned)sizeof(dx));

	printf("sizeof(na+nb) = %u\n", (unsigned)sizeof(na+nb));
	printf("sizeof(na+dy) = %u\n", (unsigned)sizeof(na+dy));
	printf("sizeof(dx+dy) = %u\n", (unsigned)sizeof(dx+dy));

	return 0;
	
}*/

//�����嵥7-5���������Ԫ�ظ���;
/*int main()
{
	int vi[10];
	double vd[25];

	printf("����vi��Ԫ�ظ���=%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));//����ĵ���Ԫ�ش�С/��������Ĵ�С=�����Ԫ�ظ���
	printf("����vd��Ԫ�ظ���=%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));//����ĵ���Ԫ�ش�С/��������Ĵ�С=�����Ԫ�ظ���

	return 0;
}*/

