#include "main.h"

/**
 * flip_bits - function that returns n.o of bits needed to flip between n.o
 * @n: first number
 * @m: second number
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
