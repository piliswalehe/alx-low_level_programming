#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string 0 or 1 in chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int x, y = 0;

	if (b == NULL)
		return (0);

	while (b[y] != '\0')
	{
	if (b[y] != '0' && b[y] != '1')
		return (0);
	y++;
	}
	for (x = 0; b[x] != '\0'; x++)
	{
	total = total << 1;

	if (b[x] == '1')
		total = total + 1;
	}
	return (total);
}
