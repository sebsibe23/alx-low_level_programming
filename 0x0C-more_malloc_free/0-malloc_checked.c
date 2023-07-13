#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates the memory using malloc function.
 * @strb: a number of bytes to allocate.
 *
 * Return: return a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int strb)
{
	void *strptr;

	strptr = malloc(strb);

	if (strptr == NULL)
	exit(98);
	return (strptr);
}
