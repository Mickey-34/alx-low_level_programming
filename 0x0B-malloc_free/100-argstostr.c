#include "main.h"

/**
 * _strlen - finding length of a string
 * @s: string
 * Return: Int
 */
int _strlen(char *s)
{
	int woo = 0;

	for (; s[woo] != '\0'; woo++)
	;
	return (woo);
}

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: arguments
 * Return: String
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *u;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (; a < ac; a++, b++)
	b += _strlen(av[a]);

	u = malloc(sizeof(char) * b + 1);
	if (u == 0)
	return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (c = 0; av[a][c] != '\0'; c++, d++)
	u[d] = av[a][c];
	u[d] = '\n';
	d++;
	}
	u[d] = '\0';
	return (u);
}
