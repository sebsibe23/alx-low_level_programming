#include <stdio.h>

/**
 * main - The alphabet is printed by it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	for (j = 0; j < 52; j++)
	{
		putchar(let[j]);
	}
	putchar('\n');
	return (0);
}
