#include "main.h"

/**
 * get_endianness - it checks if a machine is a little or big endian.
 * Return: return a 0 for big,and a 1 for little.
 */
int get_endianness(void)
{
	unsigned int f = 1;
	char *c = (char *) &f;

	return (*c);
}
