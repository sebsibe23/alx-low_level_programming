#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @bf: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *bf, int size)
{
	int o, x, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		x = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < x)
				printf("%02x", *(bf + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < x; i++)
		{
			int c = *(bf + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
