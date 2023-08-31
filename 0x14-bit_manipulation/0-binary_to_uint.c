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
	unsigned int finalres = 0;
	int intial = 1, r = 0;

	if (b == NULL)
		return (0);

	while (b[r + 1])
	{
		if (b[r] != '0' && b[r] != '1')
			return (0);
		r++;
	}

	while (r >= 0)
	{
		finalres += ((b[r] - '0') * intial);
		intial *= 2;
		r--;
	}


	return (finalres);

}
