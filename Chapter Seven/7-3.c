#include <stdio.h>

int main()
{
	float a = 123456789012345678901234567890.0;
	double b = 123456789012345678901234567890.0;
	long double c = 123456789012345678901234567890.0;

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);

	return 0;
}