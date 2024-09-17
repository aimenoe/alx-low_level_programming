#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reversing the arrays of integers
 * @a: array
 * @n: number of elements
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n /2); i++)
	{
		j = a[i];
		a[i] = a[n - i -1];
		a[n - i - 1] = j;
	}
}
