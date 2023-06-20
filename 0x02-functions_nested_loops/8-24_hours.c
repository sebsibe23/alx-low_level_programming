#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * starting  00:00 to 23:59.
 */
void jack_bauer(void)
{
	int b, k;

	b = 0;

	while (b < 24)
	{
		k = 0;
		while (k < 60)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		b++;
	}
}
