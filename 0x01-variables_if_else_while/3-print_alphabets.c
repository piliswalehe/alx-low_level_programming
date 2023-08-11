#include <stdio.h>
/**
 * main - Print alphabets in lowercase then uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabets = 'a';
	char ALPHABET = 'A';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		aplhabets++;
	}
	while (ALPHABETS <= 'Z')
	{
		putchar(ALPHABETS);
		ALPHABETS++;
	}
	return (0);
}
