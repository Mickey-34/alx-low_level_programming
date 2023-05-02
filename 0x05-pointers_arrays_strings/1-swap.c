#include "main.h"

/**
 * swap_int - Swapping the value of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Must be 0
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
