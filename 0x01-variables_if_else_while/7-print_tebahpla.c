#include <stdio.h>

/**
 * main - reverse-prints the lowercase alphabet,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aph;

	for (aph = 'z'; aph >= 'a'; aph--)
	{
		putchar(aph);
	}
	putchar('\n');
	return (0);
}
