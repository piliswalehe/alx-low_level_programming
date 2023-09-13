#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on element array
 * @array: input an integer array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Always (0) sucess
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
