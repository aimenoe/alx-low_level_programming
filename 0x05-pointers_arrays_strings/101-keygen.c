#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -generate the crack key
 * Return: Always 0.
 */
int main(void)
{
	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxyz1234567890";
	char password[9];

	srand(time(NULL));

	for (i = 0; i < 8; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) -1)];
	}
	password[8] = '\0';
	printf("%s\n", password);
	
	return  (0);
}
