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
int main()
{
    int a, b, c;
  puts("��ȡ����������");
  printf("����a"), scanf("%d",& a);
  printf("����b"), scanf("%d",& b);
  printf("����c"), scanf("%d", &c);


  printf("���ǵĺϼ�ֵ��%d", a + b + c);
  printf("���ǵ�ƽ��ֵ��%f", (double)(a + b + c) / 3);
  
  return 0;
}