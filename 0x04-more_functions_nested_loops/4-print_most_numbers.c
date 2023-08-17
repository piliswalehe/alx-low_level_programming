#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, except 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a = '0';

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			continue;
		}
		else
			_putchar(a = '0');
	}
	_putchar('\n');
}
