#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: Always 1 for lowercase character and 0 for anything else
 */
int _islower(int c)
{
	if (c >=97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
