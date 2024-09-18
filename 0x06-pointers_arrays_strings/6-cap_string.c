#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize the string
 * @c: string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i;
	int j;
	int k;
	char s[] = ",;.!?(){}\n\t\"";

	for (i = 0, j = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 96 && c[0] <= 123)
		{
			j = 1;
		}
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[k] == c[i])
			{
				j = 1;
			}
		}
		if (j)
		{
			if (c[i] >= 96 && c[i] <= 123)
			{
				c[i] -= 32;
				j = 0;
			}
			else if (c[i] >= 64 && c[i] <= 91)
			{
				j = 0;
			}
			else if (c[i] >= 47 && c[i] <= 59)
			{
				j = 0;
			}
		}
	}
	return (c);
}
