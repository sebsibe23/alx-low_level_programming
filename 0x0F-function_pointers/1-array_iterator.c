#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elements on a new line.
 * @array: array pointer .
 * @size: how many element to print.
 * @action: pointer to print in the regular or hex.
 * Return: return void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
