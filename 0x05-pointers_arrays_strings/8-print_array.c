#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @x: array name
 * @n: is the number of elements OF the array to be printed
 * Return: x and n inputs
 */
void print_array(int *x, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", x[j]);
	}
		if (j == (n - 1))
		{
			printf("%d", x[n - 1]);
		}
			printf("\n");
}
