#include "sort.h"

/**
 * swap_ints - Function to interchange the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *a, int *b)
{
	if (a != b) 
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}

/**
 * shell_sort - Function to sort an array of integers using the Shell sort method.
 * @array: Pointer to the array that needs to be sorted.
 * @size: The number of elements in the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, g, k;
	int temp1, temp2;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (g = gap; g < size; g++)
		{
			k = g;
			temp1 = array[k];
			temp2 = array[k - gap];
			while (k >= gap && temp2 > temp1)
			{
				swap_ints(&temp1, &temp2);
				array[k] = temp1;
				array[k - gap] = temp2;
				k -= gap;
			}
		}
		print_array(array, size);
	}
}


