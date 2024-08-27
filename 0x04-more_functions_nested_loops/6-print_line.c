#include "main.h"
#include <stdio.h>

/**
 * Print line - print a line 
 * @n: print int
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
