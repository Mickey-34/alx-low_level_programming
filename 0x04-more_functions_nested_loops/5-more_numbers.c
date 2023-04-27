#include "main.h"

/**
 * more_numbers - Print 1-14 10times
 *
 * Return: Void
 */
void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 14; c++)
	{
	for (d = 0; d < 10; d++)
	{
	if (c > 9)
	{
	_putchar((c / 10) + '0');
	}
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
