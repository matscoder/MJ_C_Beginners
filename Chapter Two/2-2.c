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
/*int main()
{
    int a, b, c;
  puts("读取三个整数。");
  printf("整数a"), scanf("%d",& a);
  printf("整数b"), scanf("%d",& b);
  printf("整数c"), scanf("%d", &c);


  printf("它们的合计值是%d", a + b + c);
  printf("它们的平均值是%f", (double)(a + b + c) / 3);
  
  return 0;
}*/

//转换
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
//    printf("[%.6d]\n", 12345);   //最低位数大于输出数值时，与06d的效果是一样的，.6d还带有限制小数位数的作用
//
//
//    printf("[%f]\n", 123.13);
//    printf("[%4.1f]\n", 123.13); //=.1f  
//    printf("[%6.1f]\n", 123.13);   //浮点数中。算一位吗   .后面的作用是限制小数
//
//    printf("[%f]\n", 123.13);
//    printf("[%.1f]\n", 123.13);
//    printf("[%4.1f]\n", 123.13);
//
//    printf("[%.3f]\n", 123.13);
//
//    return 0;
//}



//练习2-6
/*int main()
{
    double g;
    printf("请输入您的身高"), scanf("%lf", &g);
    printf("您的标准体重是%.1f", (g - 100) * 0.9);

}*/



//最后总结题目
/*int main()
{
    int a, b;
    printf("整数a和b的值:"), scanf("%d", &a), scanf("%d", &b);  //scanf函数能否同时输入两个数据
    printf("a+b=%d\na-b=%d\na*b=%d\na/b=%d\na%b=%d\n", a + b, a - b, a * b, a / b, a % b);
    printf("(a+b)/2=%d\n平均值=%f", (a + b) / 2, (double)(a + b) / 2.0);  //分子加double或分母变为浮点数类型均可实现输出结果的类型转换。


    double r;
    printf("半径:"), scanf("%lf", &r);                          //浮点数中.也算单独一位数，4.250中，5.3=.3   //.4f  ,1.2测试结果
    printf("半径为%5.3f的圆的面积是%.3f",r,3.14*r*r );
    return 0;
}*/


int main()
{
    //printf("[%5d]", 123);   //[  123]
    //printf("[%5lf]", 123.0);   //[123.000000] 未限制小数点后位数，则会有6位
    
    //printf("[%5.lf]", 123.0);   //[  123] 小数点后是0为什么不会打出来
    //printf("[%2.1f]", 123.1);   //[123.1] 
   // printf("[%6.1f]", 123.1);   //[ 123.1] 
   
    
    printf("[%05d]", 123);   //[00123] 
    printf("[%05d]", 1.1);   //[随机数字，1.1属于浮点型，与%d的整型不对应] 
   // printf("[%011f]", 12.1);   //[0012.100000] 
    
    
    //printf("[%.5d]", 12);   //[00012] 同05d效果一致，显示至少五位十进制整数，不足的位数前面补0
   // printf("[%.9f]", 12.1);   //[12.100000000] 仅限制小数点后数字
   // printf("[%.1f]", 12.1);   //[12.1] 仅限制小数点后数字
   
   
    printf("[%-5d]", 123);   //[123  ] 右对齐显示5d的数据
    printf("[%-5.0f]", 12.1);   //[12   ] 
     

    


    return 0;
}