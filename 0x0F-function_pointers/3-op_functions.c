#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: return The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference between two nums.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The difference of b and a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two num.
 * @b: The second num.
 * @a: The first num.
 *
 * Return: return The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two nums.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: return The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of 2 nums.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: return The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
