#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - The output of simple operations is printed.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int strnum1, strnum2;
	char *strop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	strnum1 = atoi(argv[1]);
	strop = argv[2];
	strnum2 = atoi(argv[3]);

	if (get_op_func(strop) == NULL || strop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*strop == '/' && strnum2 == 0) ||
	    (*strop == '%' && strnum2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(strop)(strnum1, strnum2));

	return (0);
}
