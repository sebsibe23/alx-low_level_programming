#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, m, v;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			v = m * i;
			if (m == 0)
			{
				_putchar(v + '0');
			}

			if (v < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(v + '0');
			} else if (v >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((v / 10) + '0');
				_putchar((v % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
