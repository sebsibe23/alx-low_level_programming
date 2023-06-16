#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - identifies if a number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	srand(time(0));
	h = rand() - RAND_MAX / 2;
	if (h > 0)
	{
		printf("%d is positive\n", h);
	}
	else if (h == 0)
	{
		printf("%d is zero\n", h);
	}
	else
	{
		printf("%d is negative\n", h);
	}
	return (0);
}
