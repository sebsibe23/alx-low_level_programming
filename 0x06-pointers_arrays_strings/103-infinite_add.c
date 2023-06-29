#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char te_mp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		te_mp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = te_mp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @num1: text representation of 1st number to add
 * @num2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *num1, char *num2, char *r, int size_r)
{
	int over_flow = 0, i = 0, j = 0, digits = 0;
	int va_l1 = 0, val2 = 0, te_mp_tot = 0;

	while (*(num1 + i) != '\0')
		i++;
	while (*(num2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over_flow == 1)
	{
		if (i < 0)
			va_l1 = 0;
		else
			va_l1 = *(num1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(num2 + j) - '0';
		te_mp_tot = va_l1 + val2 + over_flow;
		if (te_mp_tot >= 10)
			over_flow = 1;
		else
			over_flow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (te_mp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
