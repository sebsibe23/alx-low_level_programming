#include "main.h"

/**
 * set_bit - a specified index sets a bit to 1.
 * @n: reference to the number to be altered.
 * @index: to set the bit's index to 1.
 *
 * Return: if you succeed, give 1; if you fail, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
