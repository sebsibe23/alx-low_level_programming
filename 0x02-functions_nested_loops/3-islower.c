#include "main.h"

/**
 * _islower - verify that char is lowercase.
 * @f: the char needs to be verified
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int f)
{
	if (f >= 'a' && f <= 'z')
		return (1);
	else
		return (0);
}
