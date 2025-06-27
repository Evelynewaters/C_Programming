#include <stdio.h>

int add_num(int a, int b);

int add_num(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 100;
	int b = 100;
	int sum = add_num(100, 100);
	printf("The sum of the numbers %d and %d is %d\n", a, b, sum);
	return 0;
}
