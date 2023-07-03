#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size_ar: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size_ar)
{
	int sum_1, sum_2, y;

	sum_1 = 0;
	sum_2 = 0;

	for (y = 0; y < size_ar; y++)
	{
		sum_1 = sum_1 + a[y * size_ar + y];
	}

	for (y = size_ar - 1; y >= 0; y--)
	{
		sum_2 += a[y * size_ar + (size_ar - y - 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
