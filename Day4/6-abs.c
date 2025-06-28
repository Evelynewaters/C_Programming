#include <stdio.h>
#include "main.h"

int _abs(int);

int _abs(int a)
{
	if(a < 0)
	{
		return -a;
	}
	else if(a > 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
