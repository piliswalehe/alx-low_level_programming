#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: Prints string
 *
 * Return: (0)
 */
void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	for (b--; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
