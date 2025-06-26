#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	if(a = 10)
	{
		b = 1;
		while(b < 13)
		{
			printf("%d * %d = %d", a, b, a * b);
			putchar('\n');
			b++;
		}
		putchar('\n');
	}
	if(c = 20)
	{
		d = 1;
		while(d < 13)
		{
			printf("%d * %d = %d", c, d, c * d);
			putchar('\n');
			d++;
		}
	}
	putchar('\n');
}
