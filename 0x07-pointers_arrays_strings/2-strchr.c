#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a string
 * @s: input string
 * @c: input character
 * Return: pointer if character is c and null if no character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
