#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * n: Number of strings
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *s = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i = j] = '\0';
	return (s);
}
