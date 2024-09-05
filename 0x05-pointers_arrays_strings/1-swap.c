#include "main.h"
#include <stdio.h>
/**
 * Swap_int - swaping the values of two pointers.
 * @a: holds one value of pointer.
 * @b: holds second value of pointer.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
