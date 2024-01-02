#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: Character to be checked
 * Return: Always 1 for lowercase character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{return (1);
	}
	return (0);
}
