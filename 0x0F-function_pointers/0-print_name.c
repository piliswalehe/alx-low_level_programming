#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: input
 * @f: pointer
 * Return: Always (0) Sucess
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
