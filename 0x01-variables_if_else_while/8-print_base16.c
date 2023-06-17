#include <stdio.h>

/**
 * main - a program that generates all base-16 digits in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o, p;

	for (o = 48; o < 57; o++)
	{
		putchar(o);
	}
	for (p = 97; p < 103; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
