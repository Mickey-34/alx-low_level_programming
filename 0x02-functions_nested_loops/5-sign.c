#include "main.h"

/**
 * print_sign - Signs of numbers
 * @n: Number to be checked of its sign
 *
 * Return: Return 1 for + numbers, 0 for 0, -1 for - numbers
 */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else
	{
	_putchar(83);
	return (0);
	}
}
