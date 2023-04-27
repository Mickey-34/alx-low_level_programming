#include "main.h"

/**
 * print_diagonal - Draw diagonal line
 * @n: The number of times diagonal must be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	_putchar('\n');
	for (c = 0; c < n; c++)
	{
	for (d = 0; d < n; d++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
