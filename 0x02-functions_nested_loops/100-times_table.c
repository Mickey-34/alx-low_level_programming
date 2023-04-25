#include "main.h"

/**
 * print_times_table - Printing time table from 0
 * @n: Value to be printed
 */
void print_times_table(int n)
{
	int mimi, kiki, jay;

	if (n >= 0 && n <= 15)
	{
	for (mimi = 0; mimi <= n; mimi++)
	{
	_putchar('0');
	for (kiki = 1; kiki <= n; kiki++)
	{
	_putchar(',');
	_putchar(' ');
	prod = mimi * kiki;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
