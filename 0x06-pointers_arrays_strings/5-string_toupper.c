#include "main.h"

/**
 *  *string_toupper - changes all lowercase letters of a string to uppercase
 *  @m: Pointer to string
 *  Return: Pointer to uppercase string
 */
char *string_toupper(char *m)
{
	int gold;

	gold = 0;

	while (m[gold] != '\0')
	{
	if (m[gold] >= 97 && m[gold] <= 122)
	{
	m[gold] = m[gold] - 32;
	}
	gold++;
	}
	return (m);
}

