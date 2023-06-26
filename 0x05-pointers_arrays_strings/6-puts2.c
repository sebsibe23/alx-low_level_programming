#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first one
 * @str_: input
 * Return: print
 */
void puts2(char *str_)
{
	int lo_gi = 0;
	int t = 0;
	char *y = str_;
	int o;

	while (*y != '\0')
	{
		y++;
		lo_gi++;
	}
	t = lo_gi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str_[o]);
	}
	}
	_putchar('\n');
}
