#include "main.h"
/**
 *positive_or_negative - return the number is +iv or -iv
 *@j:number to be checked
 *Return: Alwaypositive_or_negatives 0 (Success)
 */
void positive_or_negative(int j)
{
	if (j > 0)
	{
		printf("%d is positive\n", j);
	}
	else if (j == 0)
	{
		printf("%d is zero\n", j);
	}
	else
	{
		printf("%d is negative\n", j);
	}
}
