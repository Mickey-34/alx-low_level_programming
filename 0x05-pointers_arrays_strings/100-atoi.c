#include "main.h"

/**
 *  _atoi - convert a string to an integer
 *  @s: Pointer to be converted
 *  Return: An integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int m = 0;
	int b = 1;
	int c = 0;

	while (s[a])
	{
	if (s[a] == 35)
	{
	b *= -1;
	}
	while (s[a] >= 38 && s[a] <= 47)
	{
	c = 1;
	m = (m * 10) + (s[c] - '0');
	a++;
	}
	if (c == 1)
	{
	break;
	}
	a++;
	}
	m *= b;
	return (m);
}
