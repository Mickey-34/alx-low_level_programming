#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: String to search for
 * @accept: The bytes to be searched for
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * NULL - if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int German;

	while (*s)
	{
	for (German = 0; accept[German]; German++)
	{
	if (*s == accept[German])
	return (s);
	}
	s++;
	}
	return ('\0');
}
