#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: Pointer to destination area
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
