#include <stdio.h>

int main()
{
	int w;
	for(w = 48; w < 58; w++)
	{
		putchar(w);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
