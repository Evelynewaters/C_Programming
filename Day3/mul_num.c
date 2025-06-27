#include <stdio.h>

int mul_num(int n, int m);

int mul_num(int n, int m)
{
	return n * m;
}

int main()
{
	int n = 100;
	int m = 100;
	int multiply = mul_num(n, m);
	printf("The product of the numbers %d and %d is %d\n", n, m, multiply);
	return 0;
}
