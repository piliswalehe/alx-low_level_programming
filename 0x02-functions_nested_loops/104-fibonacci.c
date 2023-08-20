#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *          starts with 1 and 2 
 * Return: Always 0
 */
int main(void)
{
	int count = 3;
	long int a = 1, b = 2;
	long int p = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (count <= 98)
	{
	if (count == 98)
	{
		printf("%lu\n", p);
	}
	else
	{
		printf("%lu, ", p);
	}
	a = b;
	b = p;

	p = a + b;
	count++;
	}
	return (0);
}
