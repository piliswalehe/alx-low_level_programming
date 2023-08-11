#include <stdio.h>
/**
 * main - Print alphabets in lowercase then uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabets = 'a';
	char ALPHABETS = 'A';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	while (ALPHABETS <= 'Z')
	{
		putchar(ALPHABETS);
		ALPHABETS++;
	}
	return (0);
}
