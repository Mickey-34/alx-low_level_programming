#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: Pointer the string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int mimi = 0;

	if (*s > '\0')
	{
	mimi += _strlen_recursion(s + 1) + 1;
	}
	return (mimi);
}
