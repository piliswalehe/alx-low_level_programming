#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integer n
 * @n: prints number of elements of an array
 * @a: pointer to an integer
 * Return: (0)
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);

		if (k != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
