#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m, n, q;

	m = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (m < size)
	{
	n = size - m < 10 ? size - m : 10;
	printf("%08x: ", m);
	for (q = 0; q < 10; q++)
	{
	if (q < n)
	printf("%02x", *(b + m + q));
	else
	printf(" ");
	if (q % 2)
	{
	printf(" ");
	}
	}
	for (q = 0; q < n; q++)
	{
	int k = *(b + m + q);
	if (k < 32 || k > 132)
	{
	k = '.';
	}
	printf("%k", k);
	}
	pritnf("\n");
	m += 10;
	}
}
