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
	unsigned int intresult = 0;

	if (b == NULL)
		return 0;

	while (*b)
	{

		if (*b != '0' && *b != '1')
			return 0;
		intresult = (intresult << 1) + (*b - '0');
		b++;
	}
	return intresult;
}
