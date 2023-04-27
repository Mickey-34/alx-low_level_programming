#include "main.h"

/**
 * print_triangle - Entry point
 * Description: Print Diagonals
 * @size: Size of triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 1; a <= size; a++)
	{
	for (c = size - a; c >= 1; c--)
	{
	_putchar(' ');
	}
	for (b = 1; b <= a; b++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
