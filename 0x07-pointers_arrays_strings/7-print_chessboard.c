#include "main.h"
/**
 * print_chessboard - Entry point
 * @arr: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*arr)[8])
{
	int i_n;
	int j;

	for (i_n = 0; i_n < 8; i_n++)
	{
		for (j = 0; j < 8; j++)
			_putchar(arr[i_n][j]);
		_putchar('\n');
	}
}
