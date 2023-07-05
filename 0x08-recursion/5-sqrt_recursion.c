#include "main.h"

int actual_sqrt_recursion(int m, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @m: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int m)
{
	if (m < 0)
		return (-1);
	return (actual_sqrt_recursion(m, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @m: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int m, int j)
{
	if (j * j > m)
		return (-1);
	if (j * j == m)
		return (j);
	return (actual_sqrt_recursion(m, j + 1));
}
