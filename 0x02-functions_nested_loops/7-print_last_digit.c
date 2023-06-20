#include "main.h"

/**
 * print_last_digit - prints  last digit of a number
 * @z: the int to extract  last digit from
 * Return: result of the last digit
 */
int print_last_digit(int z)
{
	int h;

	if (z < 0)
	z = -z;

	h = z % 10;

	if (h < 0)
		h = -h;

	_putchar(h + '0');

	return (h);
}
