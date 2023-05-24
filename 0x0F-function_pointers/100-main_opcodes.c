#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print opcodes of itself
 * @argc: Number of arguments given to program
 * @argv: Array of pointers to arguments
 * Return: Must be 0
 */
int main(int argc, char *argv[])
{
	int mimi, l;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	mimi = atoi(argv[1]);

	if (mimi < 0)
	{
	printf("Error\n");
	exit(2);
	}
	for (l = 0; l < mimi; mimi++)
	{
	opcode = *(unsigned char *)address;
	printf("%.2x", opcode);

	if (mimi == l - 1)
	continue;
	printf(" ");
	address++;
	}
	printf("\n");
	return (0);
}
