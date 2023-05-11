#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first
 * @y: second
 * Return: Lower than 0 y should be returned
 * else return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 1)
	return (x);
	else if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
