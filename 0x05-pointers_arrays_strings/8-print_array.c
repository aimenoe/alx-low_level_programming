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

	for (i = 0; i < n; i++)
	{
		if (i != (n -1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
