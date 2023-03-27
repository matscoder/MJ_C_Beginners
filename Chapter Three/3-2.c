#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//代码3-18，3-19
//	int no;
//	printf("请输入1个整数: "), scanf("%d", &no);
//	//if语句写法
//	/*if (no % 3 == 0)  puts("该数能被3整除");
//	else if (no % 3 == 1)  puts("该数除以3的余数是1");
//	else puts("该数除以3的余数是2");*/
//	
//	//switch语句写法
//	switch (no % 3) {
//	case 0: puts("该数能被3整除"); break;
//	case 1: puts("该数除以3的余数是1"); break;
//	case 2: puts("该数除以3的余数是2"); break;
//	}
//
//	return 0;
//}


//代码清单3-20
//int main()
//{
//	int sw;
//	printf("整数 : "), scanf("%d", &sw);
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


//书中截取代码段
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
//	//switch语句改写
//	switch (p){
//		case 1:c = 3; break;
//		case 2:c = 5; break;
//		case 3:c = 7; break;
//		case 4 :c = 9; break;
//	}
//	printf("%d", c);
//	return 0;
//}

//练习3-12

//练习3—12   3—4作修改
/*int main() {
int no;
printf("请输入1个整数");
scanf("%d", &no );
switch (no % 2) {
case 0:puts("该整数是偶数"); break;
case 1:puts("该整数是奇数"); break;
}
return 0 ;
}*/


//&3—13     3—17作修改
int main()
{
    int month;
    printf("请输入月份");
    scanf("%d", &month);
    //方法1:全写出来
    /*switch (month) {
    case 1:puts("1月是冬天"); break;
    case 2:puts("2月是冬天"); break;
    case 3:puts("3月是春天"); break;
    case 4:puts("4月是春天"); break;
    case 5:puts("5月是春天"); break;
    case 6:puts("6月是夏天"); break;
    case 7:puts("7月是夏天"); break;
    case 8:puts("8月是夏天"); break;
    case 9:puts("9月是秋天"); break;
    case 10:puts("10月是秋天"); break;
    case 11:puts("11月是秋天"); break;
    case 12:puts("12月是冬天"); break;
    }*/

方法2:
    switch (month) {
    case 1:
    case 2:printf("%d月是冬天", month);break;
    case 3:
    case 4:
    case 5:printf("%d月是春天", month); break;
    case 6:
    case 7:
    case 8:printf("%d月是夏天", month); break;
    case 9:
    case 10:
    case 11:printf("%d月是秋天", month); break;
    case 12:printf("%d月是冬天", month); break;
    }
    return 0;
}



//case后只能有1个标签值!
/*switch (month) {
case 1 || 2 || 12:printf("%d月是冬天", month); break;
case 3 || 4 || 5:printf("%d月是春天", month); break;
case 6 || 7 || 8:printf("%d月是夏天", month); break;
case 9 || 10 || 11:printf("%d月是秋天", month); break;
}*/