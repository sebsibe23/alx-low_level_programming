#include "main.h"

/**
 * print_alphabet_x10 - prints the letters in lowercase ten times.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
        char lett;
        int t;

        t = 0;

        while (t < 10)
        {
                lett = 'a';
                while (lett <= 'z')
                {
                        _putchar(lett);
                        lett++;
                }
                _putchar('\n');
                t++;
        }
}
