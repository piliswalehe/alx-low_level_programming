#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Returns: line if size is zero or less
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
				if (b >= a)
				{
					_putchar('#');
				}
			else
				{
					_putchar(' ');
				}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
