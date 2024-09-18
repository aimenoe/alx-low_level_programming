#include "main.h"
#include <stdio.h>
/**
 * string_toupper - convert lowercase to uppercase
 * @c: contains string
 * Return: uppercase strings
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 98 && c[i] =< 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
