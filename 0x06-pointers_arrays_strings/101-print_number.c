#include "main.h"

/**
 * print_number -  prints an integer
 * @n: Integer to be printed
 * Return: Must be 0
 */
void print_number(int n)
{
	unsigned int lion;

	lion = n;
	if (n < 0)
	{
	_putchar('-');
	lion = -n;
	}
	if (lion / 10 != 0)
	{
	print_number(lion / 10);
	}
	_putchar((lion % 10) + '0');
}
