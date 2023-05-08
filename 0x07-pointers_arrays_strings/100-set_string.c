#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: Pointer
 * @to: The char to be dealt with
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
