#include "main.h"

/**
 * print_line - Drawing a straight line
 * @n: The character to print
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	_putchar(20);
	}
	_putchar('\n');
	}
}

