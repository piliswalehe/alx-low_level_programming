#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - function that prints strings
 * @separator: sitring to be printed between the strings
 * @n: number of strings to be passed
 * Return: Always (0) Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
