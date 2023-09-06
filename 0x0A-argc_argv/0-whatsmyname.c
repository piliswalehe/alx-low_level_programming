#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of line command arguments
 * @argv: array with contains the program command line arguments
 * Return: Always 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
