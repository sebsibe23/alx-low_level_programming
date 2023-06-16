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
	int t;

	srand(time(0));
	t = rand() - RAND_MAX / 2;
	if (t > 0)
	{
		printf("%d is positive\n", t);
	}
	else if (t == 0)
	{
		printf("%d is zero\n", t);
	}
	else
	{
		printf("%d is negative\n", t);
	}
	return (0);
}
