#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize the string
 * @c: string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i = 0;
	int j;
	char s[] = ",;.!?(){}\n\t\"";

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
			{
				c[i] -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j < sizeof(s) - 1; j++)
				{
					if (s[j] == c[i - 1])
					{
						c[i] -= 'a' - 'A';
						break;
					}
				}
			}
		}
		i++;
	}
	return (c);
}
