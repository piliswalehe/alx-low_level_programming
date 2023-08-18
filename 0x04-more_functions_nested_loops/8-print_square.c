#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Returns: line if size is zero or less
 */
void print_square(int size)
{
	int length, width;

	while (!(size <= 0))
	{
		_putchar('\n');
		return;
	}

	for (length = size; length >= 0; length--)
	{
		for (width = size; width >= 0; width--)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
