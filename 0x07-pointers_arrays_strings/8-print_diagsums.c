#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: Matrix of integers
 * @size: Size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int dan, saw1 = 0, saw2 = 0;

	for (dan = 0; dan < size; dan++)
	{
	saw1 += a[dan];
	a += size;
	}
	a -= size;

	for (dan = 0; dan < size; dan++)
	{
	saw2 += a[dan];
	a -= size;
	}
	printf("%d, %d\n", saw1, saw2);
}
