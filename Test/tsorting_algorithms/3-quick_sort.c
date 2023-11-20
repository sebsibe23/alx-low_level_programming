#include "sort.h"

/**
 * swap_ints - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *a, int *b)
{
	int *temp_a, *temp_b;

	temp_a = a;
	temp_b = b;

	*temp_a = *b;
	*temp_b = *a;
}
/**
 *  lomuto_partition - Partitions the array for quicksort using the Lomuto partition scheme.
 *
 * @array: Pointer to the first element of the array to be partitioned.
 * @size: The number of elements in the array.
 * @left: The starting index of the section to be partitioned.
 * @right: The ending index of the section to be partitioned.
 * Return : The final index of the pivot after partitioning.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;
	int *current, *above_ptr, *below_ptr;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		current = array + below;
		below_ptr = array + below;
		above_ptr = array + above;
		if (*current < *pivot)
		{
			if (above < below)
			{
				swap_ints(below_ptr, above_ptr);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(above_ptr, pivot);
		print_array(array, size);
	}

	return (above);
}


/**
 * lomuto_sort - Recursively sorts the sections of the array around the pivot.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: The number of elements in the array.
 * @left: The starting index of the section to be sorted.
 * @right: The ending index of the section to be sorted.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;
	int *start_ptr, *end_ptr;

	if (right - left > 0)
	{
		start_ptr = array + left;
		end_ptr = array + right;
		part = lomuto_partition(start_ptr, size, left, right);
		lomuto_sort(start_ptr, size, left, part - 1);
		lomuto_sort(end_ptr, size, part + 1, right);
	}
}


/**
 * quick_sort - Sorts an array of integers in ascending order using the quicksort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: The number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	int *start_ptr;

	if (array == NULL || size < 2)
		return;
	start_ptr = array;
	lomuto_sort(start_ptr, size, 0, size - 1);
}

