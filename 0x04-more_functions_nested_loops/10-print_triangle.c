#include "main.h"
/**
 * print_triangle - This function prints a triangle followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, d;

		for (i = 1; i <= size; i++)
		{
			for (d = i; d < size; d++)
			{
				_putchar(' ');
			}

			for (d = 1; d <= i; d++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
