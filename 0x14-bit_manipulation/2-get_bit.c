#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input
 * @index: index, starting from 0 of the bit you want to get
 * Return: value at bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;
	if (n >= 64)
		return (-1);
	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}
	return (-1);
}
