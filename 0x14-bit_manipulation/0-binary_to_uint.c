#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b:
 * a
 * string
 * containing
 * the
 * binary
 * number.
 *
 * Return: return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int decintval = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		decintval = 2 * decintval + (b[f] - '0');
	}

	return (decintval);
}
