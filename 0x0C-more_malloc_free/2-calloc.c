#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array.
 * @strnmemb: number of elements in the array.
 * @strsize: size of each element.
 *
 * Return: return pointer to allocated memory.
 */
void *_calloc(unsigned int strnmemb, unsigned int strsize)
{
	char *ptr;

	if (strnmemb == 0 || strsize == 0)
		return (NULL);
	ptr = malloc(strsize * strnmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, strnmemb * strsize);
	return (ptr);
}
