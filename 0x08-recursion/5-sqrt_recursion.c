#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * @mimi: Square root
 * Return: integer
 */
int square(int n, int mimi);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find the natural square root of input num
 * @n: int square root to find
 * @mimi: square root
 * Return: int
 */
int square(int n, int mimi)
{
	if (mimi * mimi == n)
	return (mimi);
	else if (mimi * mimi < n)
	return (square(n, mimi + 1));
	else
	return (-1);
}
