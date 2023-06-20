#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the int to check.
 * Return: 1 and prints + if  is greater than zero.
 * 0 and prints 0 if h is zero.
 * -1 and prints - if h is less than zero.
 */
int print_sign(int h)
{
	if (h > 0)
	{
		_putchar('+');
		return (1);
	} 
	else if (h == 0)
    {
		_putchar(48);
		return (0);
	} 
	else if (h < 0)
	{
		_putchar('-');
		return (-1);
	}
		return 0;
}
