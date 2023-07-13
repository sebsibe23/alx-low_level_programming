#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @strmin: minimum range of values stored.
 * @strmax: maximum range of values stored and number of elements.
 * Return: return pointer to the new array.
 */
int *array_range(int strmin, int strmax)
{
	int *strptr;

	int i, str_size;

	if (strmin > strmax)
		return (NULL);
	str_size = strmax - strmin + 1;
	strptr = malloc(sizeof(int) * str_size);
	if (strptr == NULL)
		return (NULL);
	for (i = 0; strmin <= strmax; i++)
		strptr[i] = strmin++;
	return (strptr);
}
