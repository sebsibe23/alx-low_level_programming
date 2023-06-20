#include <stdio.h>

/**
 * main - fibonacci <3.
 *
 * Purpose - no hardcode.
 *
 * Return:  0 for (Success).
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int fb;
	unsigned long int fb1;
	unsigned long int af1;
	unsigned long int af1;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	fb = (bef / l);
	fb1 = (bef % l);
	af1 = (aft / l);
	af1 = (aft % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", af1 + (af1 / l));
		printf("%lu", af1 % l);
		af1 = af1 + fb;
		fb = af1 - fb;
		af1 = af1 + fb1;
		fb1 = af1 - fb1;
	}
	printf("\n");
	return (0);
}
