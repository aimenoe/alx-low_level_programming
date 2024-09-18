#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string with rot13
 * @c: contains string to be encoded
 * Return: encoded string
 */
void *rot13(char *c)
{
	int i;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "nopqrstuvwxyzabcedfghijklmNOPQRSTUVWZABACDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
				break;
			}
		}
	}
	return (c);
}
