#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the appropriate function to
 *               carry out the task requested by the user.
 * @s: The operator passed as argument to function.
 *
 * Return: return A pointer to the func corresponding
 *         to the operator given as a par.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[j].f);
}
