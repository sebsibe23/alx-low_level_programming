#include <stdio.h>
/**
 * main - It prints out the alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
	char lett[26] = "abcdefghijklmnopqrstuvwxyz";
	int t;

	for (t = 0; t < 26; t++)
	{
		putchar(lett[t]);
	}
	putchar('\n');
	return (0);
}
