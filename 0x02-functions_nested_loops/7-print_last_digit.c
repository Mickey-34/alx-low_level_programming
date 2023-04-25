#include "main.h"

/**
 * print_last_digit - Last digit of numbers
 * @m: The number to be gotten
 *
 * Return: Last digit value
 */
int print_last_digit(int m)
{
	int i;

	i = m % 10;
	if (i < 0)
	{
	i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
