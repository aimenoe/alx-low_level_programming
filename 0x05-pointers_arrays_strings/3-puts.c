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
		putchar(*str + 0);
		++str;
	}
	putchar('\n');
}
