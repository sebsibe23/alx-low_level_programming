#include <stdio.h>
#include "main.h"
/**
 * _atoi - creates an integer from a string
 * @str_s: string will be converted
 *
 * Return: return the int converted from the string
 */
int _atoi(char *str_s)
{
int j, v, n, strlen, p, strdigit;
j = 0;
v = 0;
n = 0;
strlen = 0;
p = 0;
strdigit = 0;

while (str_s[strlen] != '\0')
strlen++;

while (j < strlen && p == 0)
{
if (str_s[j] == '-')
++v;
if (str_s[j] >= '0' && str_s[j] <= '9')
{
strdigit = str_s[j] - '0';
if (v % 2)
strdigit = -strdigit;
n = n * 10 + strdigit;
p = 1;
if (str_s[j + 1] < '0' || str_s[j + 1] > '9')
break;
p = 0;
}
j++;
}
if (p == 0)
return (0);
return (n);
}
/**
 * main - the main method multiplies two numbers
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: return 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int str_result, str_num1, str_num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
str_num1 = _atoi(argv[1]);
str_num2 = _atoi(argv[2]);
str_result = str_num1 *str_num2;
printf("%d\n", str_result);
return (0);
}
