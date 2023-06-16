#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines if a number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	srand(time(0));
	p = rand() - RAND_MAX / 2;
	if (p > 0)
	{
		printf("%d is positive\n", p);
	}
	else if (p == 0)
	{
		printf("%d is zero\n", p);
	}
	else
	{
		printf("%d is negative\n", p);
	}
	return (0);
}
