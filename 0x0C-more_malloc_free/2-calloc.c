#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - first n bytes of the memory area
 * @s: array to set
 * @b: what to set it to
 * @n: first n bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	_memset(s, 0, (nmemb * size));
	return (s);
}
