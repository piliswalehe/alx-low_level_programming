#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line
 *@str: prints half string
 *Returns: (0)
 */
void puts_half(char *str)
{
	int len, i;
	int halfstring;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	halfstring = (len - 1) / 2;
	for (i = (halfstring + 1); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
