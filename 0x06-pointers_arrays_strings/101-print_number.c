#include "main.h"

/**
 * print_number - print numbers chars
 * @n1: integer params
 * Return: 0
 */

void print_number(int n1)
{
	unsigned int n2;

	n2 = n1;

	if (n1 < 0)
	{
		_putchar('-');
		n2 = -n1;
	}

	if (n2 / 10 != 0)
	{
		print_number(n2 / 10);
	}
	_putchar((n2 % 10) + '0');
}
