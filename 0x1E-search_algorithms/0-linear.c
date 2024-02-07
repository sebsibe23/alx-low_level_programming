#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear search.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: The index of the element if found, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate through each element of the array */
	for (i = 0; i < (int)size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		/* Check if the current element matches the value */
		if (value == array[i])
			return (i);
	}

	/* If the value is not found, return -1 */
	return (-1);
}
