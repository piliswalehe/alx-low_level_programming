#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabets in lowercase
 *
 * Return:always (0)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i <= 9)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	i++;
	}
}
