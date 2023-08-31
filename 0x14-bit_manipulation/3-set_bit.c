#include "main.h"

/**
 * set_bit - a sets a bit at a given index to 1.
 * @n: a pointer to a number to change.
 * @index: a index of a bit to set to 1.
 *
 * Return: return 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
