#include "main.h"

/**
 * get_bit - returns a value of a bit at an index of a decimal number.
 * @n: a number to search.
 * @index: a index of the bit.
 *
 * Return: return a value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitintval;

	if (index > 63)
		return (-1);

	bitintval = (n >> index) & 1;

	return (bitintval);
}
