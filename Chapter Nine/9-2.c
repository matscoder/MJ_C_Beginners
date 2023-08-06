#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//代码清单9-6  生成并显示字符串数组
/*int main()
{
	int i;
	char cs[][6] = { "Turbo","NA","DOHC" };

	for (i = 0; i < 3; i++)
		printf("cs[%d] = \"%s\" \n", i, cs[i]);

	return 0;

}*/

//代码9-7  读取并显示字符串数组
/*int main()
{
	int i;
	char s[3][128];  //因为没有初始值，所以元素个数不可省略。

	for (i = 0; i < 3; i++){
		printf("s [%d] :", i);
		scanf("%s", s[i]);
     }
	for (i = 0; i < 3; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);   
	return 0;
}*/
//结果:  s[3][128](该数组s的定义为:元素类型为char[3]型，元素个数为128的数组)的结果与s[3]的结果有何差别? S[3]的结果:  s [0] :Paul
/*s[0] :Paul
s[1] : John
s[2] : George
s[0] = "Paul"
s[1] = "John"
s[2] = "George"
*/