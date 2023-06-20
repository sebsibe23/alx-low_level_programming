#include "main.h"

/**
 * print_sign - prints a number's sign
 * @v: the int to check
 * Return: 1 and prints + if v is greater than zero
 * 0 and prints 0 if v is zero
 * -1 and prints - if v is less than zero
 */
int print_sign(int v)
{
	if (v > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (v == 0)
}
		_putchar(48);
		return (0);
	} 
	else if (v < 0)
	{
		_putchar('-');
	}
		return (-1);
}
