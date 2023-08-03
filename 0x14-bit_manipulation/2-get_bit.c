#include "main.h"

/**
 * get_bit - generates the bit value at an index in a decimal number.
 * @n: number to look for.
 * @index: the bit's index.
 *
 * Return: value of the bit returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int intbit_val;

	if (index > 63)
		return (-1);

	intbit_val = (n >> index) & 1;

	return (intbit_val);
}
