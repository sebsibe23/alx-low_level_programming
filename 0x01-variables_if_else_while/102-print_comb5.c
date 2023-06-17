#include <stdio.h>

/**
 * main - prints all possible two-digit number combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int i, h;

	for (i = 0; i < 100; i++)
	{
		for (h = 0; h < 100; h++)
		{
			if (i < h)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((h / 10) + 48);
				putchar((h % 10) + 48);
				if (i != 98 || h != 99)
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
