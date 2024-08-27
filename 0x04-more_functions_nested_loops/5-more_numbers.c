#include <stdio.h>
#include "main.h"

/**
 * more numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void) 
{
	int i = 0;
	int first;
	int second;
	int results = 0;

	while (i < 10)
	{
		while (results <= 14)
		{
			if (results < 10)
			{
				second = results;
			}
			else
			{
				first = results / 10;
				second = results % 10;
				_putchar(first + '0');
			}
			_putchar(second + '0');
			results++;
		}
		i++;
		results = 0;
		_putchar('\n');
	}
}
