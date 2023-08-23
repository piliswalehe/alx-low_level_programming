#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to append
 * @src: string n characters are going to append
 * @n: number of strings to append
 * Return: Pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
