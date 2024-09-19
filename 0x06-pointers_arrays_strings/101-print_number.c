#include "main.h"
#include <stdio.h>
/**
 * print_number: print integers
 * @n: integers
 * Return: integers
 */
void print_number(int n)
{
	usigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
