#include <stdio.h>
#include "main.h"

/**
 * main - print largest prime factor of 612852475143
 *
 * Return: Must be 0
 */
int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
	while ((b % a == 0) && (b != a))
	b = b / a;
	}
	printf("%lu\b", b);
	return (0);
}
