#include <stdio.h>
#include "main.h"

/**
 * Fizz Buzz printing
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%S", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%S", "Fizz");
		}
		else
		{
			printf("%d", i);
		}
	}
}
