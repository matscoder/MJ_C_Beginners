#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//����3-18��3-19
//	int no;
//	printf("������1������: "), scanf("%d", &no);
//	//if���д��
//	/*if (no % 3 == 0)  puts("�����ܱ�3����");
//	else if (no % 3 == 1)  puts("��������3��������1");
//	else puts("��������3��������2");*/
//	
//	//switch���д��
//	switch (no % 3) {
//	case 0: puts("�����ܱ�3����"); break;
//	case 1: puts("��������3��������1"); break;
//	case 2: puts("��������3��������2"); break;
//	}
//
//	return 0;
//}


//�����嵥3-20
//int main()
//{
//	int sw;
//	printf("���� : "), scanf("%d", &sw);
//
//	switch (sw){
//		case 1:puts("A");
//	puts("B"); break;
//		case 2:puts("C");
//		case 5:puts("D"); break;
//		case 3:puts("F"); break;
//		case 6:puts("E"); break;
//}
//
//	return 0;
//}


//���н�ȡ�����
//int main()
//{
//	int p, c;
//	scanf("%d", &p);
//
//	/*if (p == 1) c = 3;
//	if (p == 2) c = 5;
//	if (p == 3) c = 7;
//	if (p == 4) c = 9;
//	printf("%d", c);*/
//
//	//switch����д
//	switch (p){
//		case 1:c = 3; break;
//		case 2:c = 5; break;
//		case 3:c = 7; break;
//		case 4 :c = 9; break;
//	}
//	printf("%d", c);
//	return 0;
//}

//��ϰ3-12

//��ϰ3��12   3��4���޸�
/*int main() {
int no;
printf("������1������");
scanf("%d", &no );
switch (no % 2) {
case 0:puts("��������ż��"); break;
case 1:puts("������������"); break;
}
return 0 ;
}*/


//&3��13     3��17���޸�
int main()
{
    int month;
    printf("�������·�");
    scanf("%d", &month);
    //����1:ȫд����
    /*switch (month) {
    case 1:puts("1���Ƕ���"); break;
    case 2:puts("2���Ƕ���"); break;
    case 3:puts("3���Ǵ���"); break;
    case 4:puts("4���Ǵ���"); break;
    case 5:puts("5���Ǵ���"); break;
    case 6:puts("6��������"); break;
    case 7:puts("7��������"); break;
    case 8:puts("8��������"); break;
    case 9:puts("9��������"); break;
    case 10:puts("10��������"); break;
    case 11:puts("11��������"); break;
    case 12:puts("12���Ƕ���"); break;
    }*/

����2:
    switch (month) {
    case 1:
    case 2:printf("%d���Ƕ���", month);break;
    case 3:
    case 4:
    case 5:printf("%d���Ǵ���", month); break;
    case 6:
    case 7:
    case 8:printf("%d��������", month); break;
    case 9:
    case 10:
    case 11:printf("%d��������", month); break;
    case 12:printf("%d���Ƕ���", month); break;
    }
    return 0;
}



//case��ֻ����1����ǩֵ!
/*switch (month) {
case 1 || 2 || 12:printf("%d���Ƕ���", month); break;
case 3 || 4 || 5:printf("%d���Ǵ���", month); break;
case 6 || 7 || 8:printf("%d��������", month); break;
case 9 || 10 || 11:printf("%d��������", month); break;
}*/