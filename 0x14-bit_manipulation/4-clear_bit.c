#include "main.h"

/**
 * clear_bit - changes the value of a specified bit to 0.
 * @n: pointer indicating the new number.
 * @index: the bit to clear's index.
 *
 * Return: if you succeed, give 1; if you fail, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
