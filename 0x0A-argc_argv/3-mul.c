#include <stdio.h>
#include "main.h"

/**
 * mimi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int mimi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
	d++;
	while (a < d && e == 0)
	{
	if (s[a] == '-')
	++b;
	if (s[a] >= '0' && s[a] <= '9')
	{
	f = s[a] - '0';
	if (d % 2)
	f = -f;
	c = c * 10 + f;
	e = 1;
	if (s[a + 1] < '0' || s[a + 1] > '9')
	break;
	e = 0;
	}
	a++;
	}
	if (e == 0)
	return (0);
	return (c);
}
/**
 *  main - multiplies two numbers
 *  @argc: number of arguments
 *  @argv: array of arguments
 *  Return: Must be 0, 1 (Error)
 */
int main(int argc, char *argv[])
{
	int ko, ka, fr;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	ko = mimi(argv[1]);
	ka = mimi(argv[2]);
	fr = ko * ka;
	printf("%d\n", fr);
	return (0);
}

