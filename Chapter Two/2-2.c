#define _CRT_SECURE_NO_WARNINGS
// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"

/*读取两个整数，求出它们的平均值
int main() {
puts("请输入两个整数：");
int a, b ;
printf("整数a：");
scanf("%d", &a);
printf("整数b：" );
scanf("%d", &b);
printf("它们的平均值是%d", (a+b)/2 );
return  0 ;
}*/


//整数和浮点数
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
    puts("请输入两个整数");
    printf("实数vx："), scanf("%lf",& vx);
    printf("实数vy："), scanf("%lf", &vy);
    printf("vx+vy=%f\n vx-vy=%f\n vx*vy=%f\n vx/vy=%f\n", vx + vy, vx - vy, vx * vy, vx / vy);
    return 0;

}
*/


//练习2-3
/*int main()
{
    double x;
    printf("请输入一个实数:"), scanf("%lf", &x);
    printf("你输入的是%f", x);
    return 0;
}
*/


//验证数据类型和运算-int向double的隐式类型转换
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


//练习2-4












//读取两个整数并用浮点数显示出它们的平均值   第一种情况：分母是double类型
/*int main()
{
    int a, b;
    puts("请输入两个整数");
    printf("整数a:"), scanf("%d",& a);
    printf("整数b:"), scanf("%d",& b);
    printf("它们的平均值是%f", (a + b) / 2.0);

    return 0;

}*/


//第二种情况： 分母是double类型（类型转换表达式）
/*int main()
{
    int a, b;
    puts("请输入两个整数");
    printf("整数a:"), scanf("%d", &a);
    printf("整数b:"), scanf("%d",& b);
    printf("它们的平均值是:%f", (double)(a + b) / 2);

    return 0;
}*/

//练习2-5

/*int main()
{
    int a, b;
    puts("请输入两个整数");
    printf("整数a:"), scanf("%d", &a);
    printf("整数b:"), scanf("%d",& b);
    printf("a是b的%f%%", (double)a * 100 / b);

    return 0;

}*/



//读取三个整数，并显示它们的合计值和平均值
int main()
{
    int a, b, c;
  puts("读取三个整数。");
  printf("整数a"), scanf("%d",& a);
  printf("整数b"), scanf("%d",& b);
  printf("整数c"), scanf("%d", &c);


  printf("它们的合计值是%d", a + b + c);
  printf("它们的平均值是%f", (double)(a + b + c) / 3);
  
  return 0;
}