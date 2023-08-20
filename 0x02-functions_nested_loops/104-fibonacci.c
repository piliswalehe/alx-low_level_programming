#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count = 0;
	long int a = 1, b = 2;
	long int p = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (count < 92)
	{
		p = a + b;
		if (count == 92)
		{
			printf("%lu\n", p);
		}
		else
		{
			printf("%lu, ", p);
		}
		a = b;
		b = p;
		count++;
	}
	return (0);
}
