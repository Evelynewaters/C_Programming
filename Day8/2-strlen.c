#include <stdio.h>
#include "main.h"

int _strlen(char *s);
int _strlen(char *s)
{
	int r = 0;
	while(*s)
	{
		s++;
		r++;
	}
	return r;
}

