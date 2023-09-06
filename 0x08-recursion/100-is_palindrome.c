#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_to - compares each character of the string.
 * @s: string
 * @a: smallest iterator.
 * @b: biggest iterator.
 * Return: .
 */
int compare_to(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_to(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - function that returns 1 or 0 if string is palindrome
 * @s: input string value
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (compare_to(s, 0, _strlen_recursion(s) - 1));
}
