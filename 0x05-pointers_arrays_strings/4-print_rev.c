#include "main.h"
#include <stdioh>
/**
 * print_rev - print the string in reverse way
 * @s: string coontainer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i; length = 0;

	while (*s[length] != '\0')
	{
		length++;
	}
	for (i = length -1; i >= 0; i++)
	{
		putchar(*s[i]);
	}
	return (0);
}
