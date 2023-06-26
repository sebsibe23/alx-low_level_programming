#include "main.h"
/**
 * puts_half - a function that prints half of a string followed by a new line.
 * if odd len, m = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, m, l_ngi;

	l_ngi = 0;

	for (a = 0; str[a] != '\0'; a++)
		l_ngi++;

	m = (l_ngi / 2);

	if ((l_ngi % 2) == 1)
		m = ((l_ngi + 1) / 2);

	for (a = m; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
