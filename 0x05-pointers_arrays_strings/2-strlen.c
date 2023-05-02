#include "main.h"

/**
 * _strlen - Lookout for length of string
 * @s: String to looked at
 * Return: Length of string
 */
int _strlen(char *s)
{
	int mimi = 0;

	while (s[mimi])
		mimi++;
	return (mimi);
}
