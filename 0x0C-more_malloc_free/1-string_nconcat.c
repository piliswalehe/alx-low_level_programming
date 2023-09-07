#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: number of bytes allocated
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2  = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		s = malloc(sizeof(char) * (len1 + n + 1));
	if (!s)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';
	return (s);
}
