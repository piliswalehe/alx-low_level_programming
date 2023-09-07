#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: input string to a pointer
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}