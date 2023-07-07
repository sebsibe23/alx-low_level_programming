#include "main.h"

/**
 * _isupper - capital letters
 * * @chr: char to be examined
 *
 * Return: 0 or 1
 */

int _isupper(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (1);
	else
		return (0);
}
