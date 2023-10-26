#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input
 * @index: index, starting from 0 of the bit you want to get
 * Return: value at bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >= 64)
		return (-1);

	n = n >> index;

	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
