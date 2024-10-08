#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destinations pointer
 * @src: sources pointer
 * Return: Return concatenated strin
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest  = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
