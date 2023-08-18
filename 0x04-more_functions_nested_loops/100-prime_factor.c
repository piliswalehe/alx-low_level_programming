#include <stdio.h>

/**
 * main- Prints the largest prime factor of 612852475143
 * Return: largest prime factor of number 612852475143
 */
int main(void)
{
	long int n = 612852475143;
	long int prim;

	prim = 3;
	while (prim < n / 2)
	{
		if ((n % prim) == 0)
		{
			if ((prim % 3) == 2)
				printf(",%lu ", prim);
		}

		prim += 2;
	}

	putchar('\n');
	return (0);
}
