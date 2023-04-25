#include "main.h"

/**
 * _islower - Lowercase letter checks
 * @c: Character checking
 *
 * Return: if character is lowercase,otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
