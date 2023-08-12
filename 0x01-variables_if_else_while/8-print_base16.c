#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: = 0
 */
int main(void)
{
	char character;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}

