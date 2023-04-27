#include "main.h"

/**
 * print_square - print square of size
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	_putchar('\n');
	for (c = 0; c < size; c++)
	{
	for (d = 0; d < (size); d++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
