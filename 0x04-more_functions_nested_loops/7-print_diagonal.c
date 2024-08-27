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
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
