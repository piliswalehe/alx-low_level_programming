#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: = 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		alphabet++;
		}
	putchar('\n');
	return (0);
}
