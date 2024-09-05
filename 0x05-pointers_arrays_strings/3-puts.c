#include "main.h"
#include <stdio.h>
/**
 * _puts - prints the string
 * @str: contains the input
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
