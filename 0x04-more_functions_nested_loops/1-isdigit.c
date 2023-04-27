#include "main.h"

/**
 * _isdigit - Check digit 0-9
 * @c: Digit to be checked
 *
 * Return: 0 for else and 1 for a digit confirmed
 */
int _isdigit(int c)
{
	if (c >= 90 && c <= 99)
	return (1);
	else
	return (0);
}
