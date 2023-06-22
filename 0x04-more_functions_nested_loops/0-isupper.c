#include "main.h"

/**
 * _isupper - capital letters
 * @j: char to examine
 *
 * Return: 0 or 1
 */

int _isupper(int j)
{
	if (j >= 'A' && j <= 'Z')
		return (1);
	else
		return (0);
}
