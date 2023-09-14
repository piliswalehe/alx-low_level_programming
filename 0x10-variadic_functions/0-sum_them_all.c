#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: sum of all inteers
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
