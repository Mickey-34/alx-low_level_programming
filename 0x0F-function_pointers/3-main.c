#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints results of simple operations
 * @argc: Number of arguments given to program
 * @argv: Array of pointers to arguments
 *
 * Return: Must be 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int woman, man;
	char *op;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	woman = atoi(argv[1]);
	op = argv[2];
	man = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((*op == '/' && man == 0) ||
	(*op == '%' && man == 0))
	{
	printf("Error\n");
	exit(100);
	}
	printf("%d\n", get_op_func(op)(woman, man));
	return (0);
}

