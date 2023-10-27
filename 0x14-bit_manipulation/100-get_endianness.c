#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: 0
 */
int get_endianness(void)
{
	int a = 1;
	char *b;

	char *b = (char *) &a;

	if (*b)
		return (1);
	else
		return (0);
}
