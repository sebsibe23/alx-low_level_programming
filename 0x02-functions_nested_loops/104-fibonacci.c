#include <stdio.h>

/**
 * main - fibonacci <3.
 *
 * Purpose - no hardcode.
 *
 * Return: 0 for (Success).
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int Fibon1;
	unsigned long int Fibon2;
	unsigned long int af1;
	unsigned long int af2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	Fibon1 = (bef / l);
	Fibon2 = (bef % l);
	af1 = (aft / l);
	af2 = (aft % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", af1 + (af2 / l));
		printf("%lu", af2 % l);
		af1 = af1 + Fibon1;
		Fibon1 = af1 - Fibon1;
		af2 = af2 + Fibon2;
		Fibon2 = af2 - Fibon2;
	}
	printf("\n");
	return (0);
}
