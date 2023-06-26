#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * passwords for the program 101-crackme
 *
 * Return:0 (Success)
 */
int main(void)
{
	int pa_ss[100];
	int j, su_m, n;

	su_m = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pa_ss[j] = rand() % 78;
		su_m += (pa_ss[j] + '0');
		putchar(pa_ss[j] + '0');
		if ((2772 - su_m) - '0' < 78)
		{
			n = 2772 - su_m - '0';
			su_m += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
