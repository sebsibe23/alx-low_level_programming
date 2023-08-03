#include "main.h"

/**
 * binary_to_uint - transforms an integer from binary to unsigned.
 * @b: binary number is contained in the string.
 *
 * Return: return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int intdec_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		intdec_val = 2 * intdec_val + (b[j] - '0');
	}

	return (intdec_val);
}
