#include "main.h"

/**
 * _puts - function that printa string
 * followed by  a new line to stdout
 * @str: prints string
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
