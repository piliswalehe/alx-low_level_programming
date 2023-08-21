#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
 *
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
