#include "main.h"
#incude <stdio.h>
/**
 * strlen - prints the length of the file.
 * @s: input value.
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s !='\0'; ++s)
	{
		++length;
	}
	return (length);
}
