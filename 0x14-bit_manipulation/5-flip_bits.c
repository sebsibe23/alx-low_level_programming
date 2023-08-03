#include "main.h"

/**
 * flip_bits - the amount of bits to be changed.
 * in order to move from one number to another.
 * @n: initial number.
 * @m: the second number.
 *
 * Return: return the number of bits to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, intcount = 0;
	unsigned long int intcurrent;
	unsigned long int intexclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		intcurrent = intexclusive >> k;
		if (intcurrent & 1)
			intcount++;
	}

	return (intcount);
}
