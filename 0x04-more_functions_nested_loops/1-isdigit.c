#include "main.h"

/**
 * _isdigit - Check digit 0-9
 * @c: Digit to be checked
 *
 * Return: 0 for else and 1 for a digit confirmed
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
