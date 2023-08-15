#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Number to be checked
 * Return: Value of the last digit of a number
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
