#include "main.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse
 * @s: contained string
 * Return: return string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		j = s[i];
		s = s[length - 1 - i];
		s[length - 1 -i] = j;
	}
}
