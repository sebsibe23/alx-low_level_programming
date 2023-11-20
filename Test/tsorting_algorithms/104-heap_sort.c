#include "sort.h"

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
/**
 * swap_ints - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes
 * two pointers to integers as parameters.
 * It swaps the values of the integers
 * pointed to by the parameters.
 * The function does not return a value.
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
 * max_heapify - Converts a binary tree into a max heap.
 * @array: Pointer to the array that represents
 * the binary tree.
 * @size: The size of the array.
 * @base: The size of the heap within the array.
 * @root: The index of the root of the binary
 * tree within the array.
 *
 * Description: This function takes a pointer to
 * an array, the size of the array,
 * the size of the heap within the array,
 * and the index of the root of the binary
 * tree within the array as parameters.
 * It converts the binary tree into a max heap,
 * where the parent node is always larger
 * than or equal to its child nodes.
 * The function does not return a value.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;
	int *root_ptr, *large_ptr, *left_ptr, *right_ptr;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	root_ptr = array + root;
	large_ptr = array + large;
	left_ptr = array + left;
	right_ptr = array + right;

	if (left < base && *left_ptr > *large_ptr)
		large = left, large_ptr = left_ptr;
	if (right < base && *right_ptr > *large_ptr)
		large = right, large_ptr = right_ptr;

	if (large != root)
	{
		swap_ints(root_ptr, large_ptr);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}
/**
 * heap_sort - Sorts an array of integers in ascending
 * order using the Heap sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The size of the array.
 *
 * Description: This function takes a pointer to an array and
 * the size of the array as parameters.
 * It sorts the array in ascending order using the Heap
 * sort algorithm. The function first converts
 * the array into a max heap, where the parent node is
 * always larger than or equal to its child nodes.
 * Then it swaps the root of the heap with the last node,
 * reduces the size of the heap by one, and
 * heapifies the root node. This process is repeated until
 * the heap size is reduced to one.
 * The function does not return a value.
 */
void heap_sort(int *array, size_t size)
{
	int i;
	int start = (size / 2) - 1;
	int end = size - 1;

	if (array == NULL || size < 2)
		return;

	for (i = start; i >= 0; i--)
		max_heapify(array, size, size, i);

	for (i = end; i > 0; i--)
	{
		swap_ints(array, array + i);
		print_array(array, size);
		max_heapify(array, size, i, 0);
	}
}

