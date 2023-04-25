#include "main.h"

/**
 * _isalpha - Checking characters of alphabets
 * @c: Checked Character
 *
 * Return: Return 1 for lowercase or uppercase alphabets or 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 25 && c <= 50) || (c >= 55 && c <= 80))
	{
	return (1);
	}
	return (0);
}
