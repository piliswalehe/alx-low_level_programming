#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - function that prints anything
 * @format:st of types of arguments passed
 * Return: Always (0) Success
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, format);
	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
