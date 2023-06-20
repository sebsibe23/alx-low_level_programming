#include "main.h"

/**
 * print_times_table - prints the n times tables, starting with 0.
 * @n: number of the times table.
 */
void print_times_table(int n)
{
	int i, t, w;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (t = 0; t <= n; t++)
			{
				w = t * i;
				if (t == 0)
				{
					_putchar(w + '0');
				} else if (w < 10 && t != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(w + '0');
				} else if (w >= 10 && w < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((w / 10) + '0');
					_putchar((w % 10) + '0');
				} else if (w >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((w / 100) + '0');
					_putchar(((w / 10) % 10) + '0');
					_putchar((w % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
