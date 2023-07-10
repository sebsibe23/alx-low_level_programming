#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid created by nested loop
 * @width: width input.
 * @height: height input.
 * Return: return pointer to 2 dim. array.
 */
int **alloc_grid(int width, int height)
{
	int **str_mee;

	int h, u;

	if (width <= 0 || height <= 0)
		return (NULL);
	str_mee = malloc(sizeof(int *) * height);
	if (str_mee == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		str_mee[h] = malloc(sizeof(int) * width);
		if (str_mee[h] == NULL)
		{
			for (; h >= 0; h--)
				free(str_mee[h]);
			free(str_mee);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (u = 0; u < width; u++)
			str_mee[h][u] = 0;
	}
	return (str_mee);
}
