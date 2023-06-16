#include <stdio.h>

/**
 * main - prints every three-digit combination that is possible.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int q, d, z;

        for (q = 48; q < 58; q++)
        {
                for (d = 49; d < 58; d++)
                {
                        for (z = 50; z < 58; z++)
                        {
                                if (z > d && d > q)
                                {
                                        putchar(q);
                                        putchar(d);
                                        putchar(z);
                                        if (q != 55 || d != 56)
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
