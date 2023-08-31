#include <stdio.h>
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
	unsigned int val_int = 0;
	int e = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[e] == '0' || b[e] == '1')
	{
		val_int <<= 1;
		val_int += b[e] - '0';
		e++;
	}

	return (val_int);
}
