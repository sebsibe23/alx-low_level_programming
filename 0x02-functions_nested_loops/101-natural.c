#include <stdio.h>

/**
 * main - Lists all  natural numbers under 1024 (excluded).
 *        that are multiples of 5 or 3.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, p = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			p += i;
	}

	printf("%d\n", p);

	return (0);
}
