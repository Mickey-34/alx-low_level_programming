#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: String to search
 * @accept: Prefix to meaure its length
 * Return:  the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int mimi = 0;
	int jojo;

	while (*s)
	{
	for (jojo = 0; accept[jojo]; jojo++)
	{
	if (*s == accept[jojo])
	{
	mimi++;
	break;
	}
	else if (accept[jojo + 1] == '\0')
	return (mimi);
	}
	s++;
	}
	return (mimi);
}
