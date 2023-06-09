#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 *  the operation asked by the user
 *  @s: Operator passed as argument
 *
 *  Return: Pointer to function corresponding
 *  to the operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
		m++;
	return (ops[m].f);
}
