#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: String to search for
 * @needle: Substring to be located
 * Return: a pointer to the beginning of the located substring
 * NULL - if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int abbey;

	if (*needle == 0)
	return (haystack);
	while (*haystack)
	{
	abbey = 0;
	if (haystack[abbey] == needle[abbey])
	{
	do {
	if (needle[abbey + 1] == '\0')
	return (haystack);
	abbey++;
	} while (haystack[abbey] == needle[abbey]);
	}
	haystack++;
	}
	return ('\0');
}
