#include <stdio.h>

/**
 * add - the function that sums two integers.
 * @integer1: first integer.
 * @integer2: second integer.
 *
 * Return: return the sum of integer1 and integer2
 */
int add(int integer1, int integer2)
{
	return (integer1 + integer2);
}

/**
 * sub - a function that subtracts two int.
 * @integer1: first integer.
 * @integer2: second integer.
 *
 * Return: return the result of integer1 - integer2
 */
int sub(int integer1, int integer2)
{
	return (integer1 - integer2);
}

/**
 * mul - the function that multiplies two integers.
 * @integer1: first integer.
 * @integer2: second integer.
 *
 * Return: return the product of integer1 and integer2.
 */
int mul(int integer1, int integer2)
{
	return (integer1 * integer2);
}

/**
 * div - the function that divides two integers.
 * @integer1: first integer (numerator).
 * @integer2: second integer (denominator).
 *
 * Return: return the result of integer1 / integer2, or 0 if integer2 is 0.
 */
int div(int integer1, int integer2)
{
	if (integer2 != 0)
		return (integer1 / integer2);
	else
		return (0);
}

/**
 * mod - the function that calculates the remainder of
 * the division of two integers.
 * @integer1: first integer (numerator).
 * @integer2: second integer (denominator).
 *
 * Return: return the remainder of integer1 / integer2, or 0 if integer2 is 0.
 */
int mod(int integer1, int integer2)
{
	if (integer2 != 0)
		return (integer1 % integer2);
	else
		return (0);
}

