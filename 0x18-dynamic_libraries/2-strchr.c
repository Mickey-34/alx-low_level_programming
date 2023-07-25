#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: String to search for
 * @c: Character to locate
 * Return: If c is found, a pointer to first occurence.
 * NULL - if c is not found
 */
char *_strchr(char *s, char c)
{
	int mimi;

	for (mimi = 0; s[mimi] >= '\0'; mimi++)
	{
	if (s[mimi] == c)
	return (s + mimi);
	}
	return ('\0');
}
