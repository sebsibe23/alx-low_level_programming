#include <stdio.h>
#include <math.h>


/**
 * main - discovers and prints the number 612852475143's largest prime factor.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int max_;
	long int i;

	x = 612852475143;
	max_ = -1;

	while (x % 2 == 0)
	{
		max_ = 2;
		x /= 2;
	}

	for (i = 3; i <= sqrt(x); i = i + 2)
	{
		while (x % i == 0)
		{
			max_ = i;
			x = x / i;
		}
	}

	if (x > 2)
		max_ = x;

	printf("%ld\n", max_);

	return (0);
}
