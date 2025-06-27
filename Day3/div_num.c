#include <stdio.h>

int div_num(int p, int q);

int div_num(int p, int q)
{
	return p / q;
}

int main()
{
	int p = 100;
	int q = 100;
	int Divide = div_num(p, q);
	printf("%d divided by %d is %d\n", p, q, Divide);
	return 0;
}
