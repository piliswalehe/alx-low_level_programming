#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer memory location is set
 * @b: value to be copied to memory block
 * @n: nummber of bytes in memory block
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
