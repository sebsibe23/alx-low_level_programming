#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @arrstr: array arrstr
 *
 * Return: Always 0 (Success)
 */
int check_num(char *arrstr)
{
unsigned int strcount;
strcount = 0;
while (strcount < strlen(arrstr))
{
if (!isdigit(arrstr[strcount]))
{
return (0);
}
strcount++;
}
return (1);
}
/**
 * main - Print the name of the program
 * @strargc: str_Count arguments
 * @strargv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int strargc, char *strargv[])
{
int str_Count;
int str_to_int;
int str_sum = 0;
str_Count = 1;
while (str_Count < strargc)
{
if (check_num(strargv[str_Count]))
{
str_to_int = atoi(strargv[str_Count]);
str_sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
str_Count++;
}
printf("%d\n", str_sum)
return (0);
}
