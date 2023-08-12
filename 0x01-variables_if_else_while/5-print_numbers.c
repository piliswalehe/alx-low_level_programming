#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: = 0
 */
int main(void)
{
	char baseten = '0';

	while (baseten <= '9')
	{
		putchar(baseten);
		baseten++;
	}
	putchar('\n');
	return (0);
}
