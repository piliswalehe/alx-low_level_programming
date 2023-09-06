#include <stdio.h>

/**
 * main - prints the number of command arguments passed to it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0 success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
