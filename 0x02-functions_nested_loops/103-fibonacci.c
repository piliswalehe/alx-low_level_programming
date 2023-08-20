#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2;
	int sum;

	while (sum <= 4000000)
	{
	if (b % 2 == 0)
	{
		sum = a + b;
	}
	sum += b;
	a = b;
	b = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
