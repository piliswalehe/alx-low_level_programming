#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to be printed
 * @src: appends string to dest
 * Return: Pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)

		for (j = 0; dest[j] != '\0'; j++)
		{
			dest[j] = src[i];
		}
	return (dest);
}
