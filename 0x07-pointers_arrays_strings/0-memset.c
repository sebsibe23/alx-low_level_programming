#include "main.h"
/**
 * _memset - ill a memory block with a given value
 * @t: initial memory address to be filled
 * @q: the ideal value
 * @n: bytes that must be changed
 *
 * Return: modified array for n bytes with new value
 */
char *_memset(char *t, char q, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		t[i] = q;
		n--;
	}
	return (t);
}
