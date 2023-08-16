#include "main.h"

/**
 * prints_times_table - prints the n times table, starting with 0.
 *@n: Number of the times table
 */
void prints_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c < 10 && b != 0)
			{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
			}
			else if (c > 10 && b != 0)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
