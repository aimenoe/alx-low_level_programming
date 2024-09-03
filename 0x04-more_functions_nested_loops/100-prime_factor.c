#include <stdio.h>
#include <math.h>
/**
 * main - printing the largest factor number of the input number.
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long i;
	long largest_number = -1;

	while (n % 2 == 0)
	{
		largest_number = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_number = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		n = largest_number;
	}
	printf("%ld\n", largest_number);
	return (0);
}
