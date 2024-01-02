#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: Character to be checked
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
