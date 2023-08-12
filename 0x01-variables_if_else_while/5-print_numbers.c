#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: = 0
 */
int main(void)
{
	char base ten = '0';

	while (base ten <= '9')
	{
		putchar(base ten);
		base ten++;
	}
	putchar('\n');
	return (0);
}
