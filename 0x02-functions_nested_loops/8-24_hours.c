#include "main.h"
#include <time.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 00:00 to 23:59
 *
 * Return: 24 hours
 */
void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
