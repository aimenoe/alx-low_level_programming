#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string apointed to source 
 * @dest: destination ponter
 * @src: source pointer
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	int len = 0;

	while (src[len] !+ '\0')
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest0;
}
