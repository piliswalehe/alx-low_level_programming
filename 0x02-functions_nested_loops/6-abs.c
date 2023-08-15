#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for lowercase character
 *@c: Number to be checked
 * Return: Always 0 or absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
