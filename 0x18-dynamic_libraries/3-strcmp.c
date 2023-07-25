#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: The pointer to first string
 *  @s2: The pointer to second string
 *  Return: value 0 should be returned if string is less than the other
 *  Value greater than 0 if string is greater than the other, otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	int mimi, zazu;

	mimi = 0;
	while (s1[mimi] == s2[mimi] && s1[mimi] != '\0')
	{
	mimi++;
	}
	zazu = s1[mimi] - s2[mimi];
	return (zazu);
}
