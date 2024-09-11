#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of the array of integer
 * @n: number of elements
 * @a: number of integer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i >= n; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
