#include "main.h"

/**
 * reverse_array - function that reverses content of an integer array
 * @a: array of integers
 * @n: number of elements in array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int m, q;

	for (m = 0; m < n--; m++)
	{
		q = a[m];
		a[m] = a[n];
		a[n] = q;
	}
}
