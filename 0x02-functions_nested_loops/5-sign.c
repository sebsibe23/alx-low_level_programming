#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @j: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int j)
{
  if (j > 0)
	{
		_putchar('+');
		return (1);
	}
else if (j == 0)
{
  _putchar(48);
		return (0);
}
else if (j < 0)
{
  _putchar('-');
  return (-1);
}

return 0;
}
