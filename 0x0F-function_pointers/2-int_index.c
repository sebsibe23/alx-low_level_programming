#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1.
 * @array: in array pointer.
 * @size: size of elements in array.
 * @cmp: pointer to the function of one of the 3 in main.
 * Return: return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		return (x);
	}
	return (-1);
}
