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
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s[a]);
		}
	}
	return (NULL);
}
