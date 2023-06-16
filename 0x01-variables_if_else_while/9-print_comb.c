#include <stdio.h>

/**
 * main - prints all single-digit number combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int com;

	for (com = 48; com < 58; com++)
	{
		putchar(com);
		if (com != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
