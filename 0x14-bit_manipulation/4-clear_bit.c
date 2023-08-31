#include "main.h"

/**
 * clear_bit - sets a value of cth given bit to 0.
 * @n: the pointer to a number to change.
 * @index: the index of a bit to clear.
 *
 * Return: return 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
