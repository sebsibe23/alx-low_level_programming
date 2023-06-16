#include <stdio.h>

/**
 * main - prints every two-digit combination that is achievable.
 * Return: for  0 (Success)
 */
int main(void)
{
	int y, m;

	for (y = 48; y <= 56; y++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > y)
			{
				putchar(y);
				putchar(m);
				if (y != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
