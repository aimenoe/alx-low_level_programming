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
	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_puchar('\n');
		}
	}
}
