#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Omits the letters q and e from the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 97; s < 123; s++)
	{
		if (s != 101 && s != 113)
		{
			putchar(s);
		}
	}
	putchar('\n');
	return (0);
}
