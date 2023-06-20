#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *        separated by  comma and followed by  space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int m;
	unsigned long fb1 = 0, fb2 = 1, tot;

	for (m = 0; m < 50; m++)
	{
		tot = fb1 + fb2;
		printf("%lu", tot);

		fb1 = fb2;
		fb2 = tot;

		if (m == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
