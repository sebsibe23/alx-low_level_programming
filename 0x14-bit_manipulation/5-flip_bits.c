#include "main.h"

/**
 * flip_bits - a counts the number of bits to change.
 *
 * @n: a first var number.
 * @m: a second var number.
 *
 * Return: return number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, countint = 0;
	unsigned long int cur;
	unsigned long int intexe = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		cur = intexe >> s;
		if (cur & 1)
			countint++;
	}

	return (countint);
}
