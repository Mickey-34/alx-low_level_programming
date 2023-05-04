#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: The pointer to array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int mimi, biscuit;

	n = n - 1;
	biscuit = 0;
	while (biscuit <= n)
	{
	mimi = a[biscuit];
	a[biscuit++] = a[n];
	a[n--] = mimi;
	}
}
