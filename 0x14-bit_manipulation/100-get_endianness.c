#include "main.h"

/**
 * get_endianness - determines if a computer is large or tiny endian.
 * Return: return 0 for large, and 1 for small.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *chr = (char *) &j;

	return (*chr);
}
