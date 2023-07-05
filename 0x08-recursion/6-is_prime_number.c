#include "main.h"

int actual_prime(int num, int j);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @num: number to evaluate
 *
 * Return: 1 if num is a prime number, 0 if not
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (actual_prime(num, num - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @num: number to evaluate
 * @j: iterator
 *
 * Return: 1 if num is prime, 0 if not
 */
int actual_prime(int num, int j)
{
	if (j == 1)
		return (1);
	if (num % j == 0 && j > 0)
		return (0);
	return (actual_prime(num, j - 1));
}
