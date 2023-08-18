#include <stdio.h>

/**
 * Main - A program that prints 1 to 100
 *
 * Returns: digit, fizz,buzz or fizzbuzz
 */
int main(void)
{
	int num;

	num = 0;
		while (num < 100)
	{
		num++;
		if ((num % 3) != 0 && (num % 5) != 0)
		{
			printf("%d", num);
		}
		else if ((num % 3)  == 0 && (num % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (num < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
