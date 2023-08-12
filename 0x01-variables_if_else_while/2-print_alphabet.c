#include <stdio.h>
/**
 *main - Print alphabets in lowercase
 *
 *Return:always (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
putchar('\n');
return (0);
}
