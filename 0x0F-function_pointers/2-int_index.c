#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input pointer array
 * @size: number of elements in the array array
 * @cmp:  pointer to the function to be used to compare values
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (b = 0; b < size; b++)
			if (cmp(array[b]))
				return (b);
	}
	return (-1);
}
