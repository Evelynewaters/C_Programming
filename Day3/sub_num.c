#include <stdio.h>

int sub_num(int x, int y);

int sub_num(int x, int y)
{
	return x - y;
}

int main()
{
	int x = 100;
	int y = 100;
	int subtract = sub_num(x, y);
	printf("The differnce between %d and %d is %d\n", x, y, subtract);
	return 0;
}
