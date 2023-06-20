#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * followed by a new line.
 * @n: print from this number.
 */
void print_to_98(int n)
{
	int k, v;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	} else if (n >= 98)
	{
		for (v = n; v >= 98; v--)
		{
			if (v != 98)
				printf("%d, ", v);
			else if (v == 98)
				printf("%d\n", v);
		}
	}
}
