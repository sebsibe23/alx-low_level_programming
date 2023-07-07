#include "main.h"
/**
 * _memset - fill a memory block with a given value
 * @start_ing: initial memory address to be filled
 * @str: the necessary quantity
 * @num_ber: the amount of bytes that must be modified
 *
 * Return: updated array with new num_ber_bytes value
 */
char *_memset(char *start_ing, char str, unsigned int num_ber)
{
	int i = 0;

	for (; num_ber > 0; i++)
	{
		start_ing[i] = str;
		num_ber--;
	}
	return (start_ing);
}
