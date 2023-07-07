#include "main.h"

/**
 * _isdigit - searches for a digit (0–9)
 * @chr: int to be checked on the function
 * Return: if chr is a digit, 1; if not, 0
 */
int _isdigit(int chr)
{
	return (chr >= '0' && chr <= '9');
}
