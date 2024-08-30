#include "main.h"
#include <stdio.h>
/**
 * Print triangle - printing angle shaped with #
 * @size: number of # to printed
 * @i: initial interval range
 * @j: last interval range
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(" ");
			}
			for (j = 0; j <= i; j++)
			{
				_putchar("#");
			}
			_putchar("\n");
		}
	}
}
