#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: return Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int strby_tes, i;
	char *str_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	strby_tes = atoi(argv[1]);

	if (strby_tes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str_arr = (char *)main;

	for (i = 0; i < strby_tes; i++)
	{
		if (i == strby_tes - 1)
		{
			printf("%02hhx\n", str_arr[i]);
			break;
		}
		printf("%02hhx ", str_arr[i]);
	}
	return (0);
}
