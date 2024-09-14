#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of string
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; n > j; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
