#include "main.h"
#include <stdio.h>
/**
 * Printing - printing triangle shaped with #
 * @size: The size of the #
 * @i: Initial range
 * @j: Limit range
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= size)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(' ');
			}
			for (j= 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
