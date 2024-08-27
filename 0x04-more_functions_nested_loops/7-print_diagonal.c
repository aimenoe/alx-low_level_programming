#include <stdio.h>
#include "main.h"

/**
 * Print diagonal - print backslash lines
 * @n: print n
 * Return: always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
