#include "main.h"

/**
 * _isalpha - Checking characters of alphabets
 * @c: Checked Character
 *
 * Return: Return 1 for lowercase or uppercase alphabets or 0 for otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
