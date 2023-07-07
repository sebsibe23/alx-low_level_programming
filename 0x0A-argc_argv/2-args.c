#include <stdio.h>
#include "main.h"
/**
 * main - displays all input parameters
 * @str_argc: number of arguments
 * @str_argv: array of arguments
 *
 * Return: return Always 0 (Success)
 */
int main(int str_argc, char *str_argv[])
{
	int j;

	for (j = 0; j < str_argc; j++)
	{
		printf("%s\n", str_argv[j]);
	}
	return (0);
}
