#include <stdio.h>
#include <string.h>
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
	unsigned int result_int = 0;
	int var_int_len;

	if (!b)
		return (0);

	var_int_len = strlen(b);
	for (int p = 0; p < var_int_len; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		result_int += (b[p] - '0') << (var_int_len - p - 1);
	}
	return (result_int);
}
