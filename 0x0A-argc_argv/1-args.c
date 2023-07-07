#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments the program has received.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: return Always 0 (Success).
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
