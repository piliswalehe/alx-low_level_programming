#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Returns: line if size is zero or less
 */
void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= size; length++)
	{
		_putchar('#');
	}
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
