#define _CRT_SECURE_NO_WARNINGS
// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"

/*��ȡ����������������ǵ�ƽ��ֵ
int main() {
puts("����������������");
int a, b ;
printf("����a��");
scanf("%d", &a);
printf("����b��" );
scanf("%d", &b);
printf("���ǵ�ƽ��ֵ��%d", (a+b)/2 );
return  0 ;
}*/


//�����͸�����
/*int main()
{
    int  n;
    double x;
   
    x = 9.99;
    n = 9.99;
   // x = 9.99;
    
    printf("int variable n:%d\n n/2=%d\n", n, n / 2);
    printf("double variable x:%f\n x/2=%f", x, x / 2);
    return  0;
}*/

/*int main()
{
    double vx, vy;
    puts("��������������");
    printf("ʵ��vx��"), scanf("%lf",& vx);
    printf("ʵ��vy��"), scanf("%lf", &vy);
    printf("vx+vy=%f\n vx-vy=%f\n vx*vy=%f\n vx/vy=%f\n", vx + vy, vx - vy, vx * vy, vx / vy);
    return 0;

}
*/


//��ϰ2-3
/*int main()
{
    double x;
    printf("������һ��ʵ��:"), scanf("%lf", &x);
    printf("���������%f", x);
    return 0;
}
*/


//��֤�������ͺ�����-int��double����ʽ����ת��
/*int main()
{
    int  n1, n2, n3, n4;
    double d1, d2, d3, d4;
    
    n1 = 5 / 2;
    n2 = 5.0 / 2.0;
    n3 = 5.0 / 2;
    n4 = 5 / 2.0;

    d1 = 5 / 2;
    d2 = 5.0 / 2, 0;
    d3 = 5.0 / 2;
    d4 = 5 / 2.0;

    printf("n1=%d\n", n1);
    printf("n2=%d\n", n2);
    printf("n3=%d\n", n3);
    printf("n4=%d\n", n4);

    printf("d1=%f\n", d1);
    printf("d2=%f\n", d2);
    printf("d3=%f\n", d3);
    printf("d4=%f\n", d4);

    return 0;
}*/


//��ϰ2-4












//��ȡ�����������ø�������ʾ�����ǵ�ƽ��ֵ   ��һ���������ĸ��double����
/*int main()
{
    int a, b;
    puts("��������������");
    printf("����a:"), scanf("%d",& a);
    printf("����b:"), scanf("%d",& b);
    printf("���ǵ�ƽ��ֵ��%f", (a + b) / 2.0);

    return 0;

}*/


//�ڶ�������� ��ĸ��double���ͣ�����ת�����ʽ��
/*int main()
{
    int a, b;
    puts("��������������");
    printf("����a:"), scanf("%d", &a);
    printf("����b:"), scanf("%d",& b);
    printf("���ǵ�ƽ��ֵ��:%f", (double)(a + b) / 2);

    return 0;
}*/

//��ϰ2-5

/*int main()
{
    int a, b;
    puts("��������������");
    printf("����a:"), scanf("%d", &a);
    printf("����b:"), scanf("%d",& b);
    printf("a��b��%f%%", (double)a * 100 / b);

    return 0;

}*/



//��ȡ��������������ʾ���ǵĺϼ�ֵ��ƽ��ֵ
/*int main()
{
    int a, b, c;
  puts("��ȡ����������");
  printf("����a"), scanf("%d",& a);
  printf("����b"), scanf("%d",& b);
  printf("����c"), scanf("%d", &c);


  printf("���ǵĺϼ�ֵ��%d", a + b + c);
  printf("���ǵ�ƽ��ֵ��%f", (double)(a + b + c) / 3);
  
  return 0;
}*/

//ת��
//int main()
//{
//    printf("[%d]\n",123);
//    printf("[%.4d]\n",123);
//    printf("[%4d]\n",123);
//    printf("[%04d]\n",123);
//    printf("[%-4d]\n",123);
//
//    printf("[%d]\n", 12345);
//    printf("[%.3d]\n", 12345);
//    printf("[%3d]\n", 12345);
//    printf("[%03d]\n", 12345);
//    printf("[%-3d]\n", 12345);   
//    printf("[%6d]\n", 12345);   
//    printf("[%.6d]\n", 12345);   //���λ�����������ֵʱ����06d��Ч����һ���ģ�.6d����������С��λ��������
//
//
//    printf("[%f]\n", 123.13);
//    printf("[%4.1f]\n", 123.13); //=.1f  
//    printf("[%6.1f]\n", 123.13);   //�������С���һλ��   .���������������С��
//
//    printf("[%f]\n", 123.13);
//    printf("[%.1f]\n", 123.13);
//    printf("[%4.1f]\n", 123.13);
//
//    printf("[%.3f]\n", 123.13);
//
//    return 0;
//}



//��ϰ2-6
/*int main()
{
    double g;
    printf("�������������"), scanf("%lf", &g);
    printf("���ı�׼������%.1f", (g - 100) * 0.9);

}*/



//����ܽ���Ŀ
/*int main()
{
    int a, b;
    printf("����a��b��ֵ:"), scanf("%d", &a), scanf("%d", &b);  //scanf�����ܷ�ͬʱ������������
    printf("a+b=%d\na-b=%d\na*b=%d\na/b=%d\na%b=%d\n", a + b, a - b, a * b, a / b, a % b);
    printf("(a+b)/2=%d\nƽ��ֵ=%f", (a + b) / 2, (double)(a + b) / 2.0);  //���Ӽ�double���ĸ��Ϊ���������;���ʵ��������������ת����


    double r;
    printf("�뾶:"), scanf("%lf", &r);                          //��������.Ҳ�㵥��һλ����4.250�У�5.3=.3   //.4f  ,1.2���Խ��
    printf("�뾶Ϊ%5.3f��Բ�������%.3f",r,3.14*r*r );
    return 0;
}*/


int main()
{
    //printf("[%5d]", 123);   //[  123]
    //printf("[%5lf]", 123.0);   //[123.000000] δ����С�����λ���������6λ
    
    //printf("[%5.lf]", 123.0);   //[  123] С�������0Ϊʲô��������
    //printf("[%2.1f]", 123.1);   //[123.1] 
   // printf("[%6.1f]", 123.1);   //[ 123.1] 
   
    
    printf("[%05d]", 123);   //[00123] 
    printf("[%05d]", 1.1);   //[������֣�1.1���ڸ����ͣ���%d�����Ͳ���Ӧ] 
   // printf("[%011f]", 12.1);   //[0012.100000] 
    
    
    //printf("[%.5d]", 12);   //[00012] ͬ05dЧ��һ�£���ʾ������λʮ���������������λ��ǰ�油0
   // printf("[%.9f]", 12.1);   //[12.100000000] ������С���������
   // printf("[%.1f]", 12.1);   //[12.1] ������С���������
   
   
    printf("[%-5d]", 123);   //[123  ] �Ҷ�����ʾ5d������
    printf("[%-5.0f]", 12.1);   //[12   ] 
     

    


    return 0;
}