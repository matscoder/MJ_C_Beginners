#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����嵥9-6  ���ɲ���ʾ�ַ�������
/*int main()
{
	int i;
	char cs[][6] = { "Turbo","NA","DOHC" };

	for (i = 0; i < 3; i++)
		printf("cs[%d] = \"%s\" \n", i, cs[i]);

	return 0;

}*/

//����9-7  ��ȡ����ʾ�ַ�������
/*int main()
{
	int i;
	char s[3][128];  //��Ϊû�г�ʼֵ������Ԫ�ظ�������ʡ�ԡ�

	for (i = 0; i < 3; i++){
		printf("s [%d] :", i);
		scanf("%s", s[i]);
     }
	for (i = 0; i < 3; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);   
	return 0;
}*/
//���:  s[3][128](������s�Ķ���Ϊ:Ԫ������Ϊchar[3]�ͣ�Ԫ�ظ���Ϊ128������)�Ľ����s[3]�Ľ���кβ��? S[3]�Ľ��:  s [0] :Paul
/*s[0] :Paul
s[1] : John
s[2] : George
s[0] = "Paul"
s[1] = "John"
s[2] = "George"
*/