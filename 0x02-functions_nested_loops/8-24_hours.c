#include "main.h"

/**
 * jack_bauer - Minutes of the day for Jack Bauer
 *
 * Return:
 */
void jack_bauer(void)
{
	int q, r;

	q = 0;

	while (q < 24)
	{
	r = 0;
	while (r < 60)
	{
	_putchar((q / 10) + '0');
	_putchar((q % 10) + '0');
	_putchar(':');
	_putchar((r / 10) + '0');
	_putchar((r % 10) + '0');
	_putchar('\n');
	r++;
	}
	q++;
	}
}
