#include <stdio.h>

/**
 * main - Displays the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int w;

	for (w = 0; w < 26; w++)
	{
		putchar(alp[w]);
	}
	putchar('\n');
	return (0);
}
