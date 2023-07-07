#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the function prints the minimum number of coins to
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: return 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int str_num, g, op_result;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
str_num = atoi(argv[1]);
op_result = 0;
if (str_num < 0)
{
printf("0\n");
return (0);
}
for (g = 0; g < 5 && str_num >= 0; g++)
{
while (str_num >= coins[g])
{
op_result++;
str_num -= coins[g];
}
}
printf("%d\n", op_result);
return (0);
}
