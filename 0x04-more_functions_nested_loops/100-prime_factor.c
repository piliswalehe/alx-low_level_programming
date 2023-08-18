#include <stdio.h>

/**
 * main- Prints the largest prime factor of 612852475143
 * Return: largest prime factor of number 612852475143
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
