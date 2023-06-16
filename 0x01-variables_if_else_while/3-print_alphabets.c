#include <stdio.h>

/**
 * main - Displays the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int w;

	for (w = 0; w < 26; w++)
	{
		putchar(alphabet[w]);
	}
	putchar('\n');
	return (0);
}
