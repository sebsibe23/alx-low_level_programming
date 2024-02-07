#include "search_algos.h"
#include <stdio.h>
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
    size_t i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

