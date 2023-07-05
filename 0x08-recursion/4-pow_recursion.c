#include "main.h"

/**
 * _pow_recursion - returns the value of j raised to the power of k
 * @j: value to raise
 * @k: power
 *
 * Return: result of the power
 */
int _pow_recursion(int j, int k)
{
	if (k < 0)
		return (-1);
	if (k == 0)
		return (1);
	return (j * _pow_recursion(j, k - 1));
}
