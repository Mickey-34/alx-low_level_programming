#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 * Return: Int of number of words
 */
int wrdcnt(char *s)
{
	int g, j = 0;

	for (g = 0; s[g]; g++)
	{
	if (s[g] == ' ')
	{
	if (s[g + 1] != ' ' && s[g + 1] != '\0')
	j++;
	}
	else if (g == 0)
	j++;
	}
	j++;
	return (j);
}

/**
 * **strtow - splits a string into words
 * @str: String to be splitted
 * Return: Pointer to array of strings
 */
char **strtow(char *str)
{
	int u, v, w, x, y = 0, z = 0;
	char **b;

	if (str == NULL || *str == '\0')
	return (NULL);
	y = wrdcnt(str);
	if (y == 1)
	return (NULL);
	b = (char **)malloc(y * sizeof(char *));
	if (b == NULL)
	return (NULL);
	b[y - 1] = NULL;
	u = 0;
	while (str[u])
	{
	if (str[u] != ' ' && (u == 0 || str[u - 1] == ' '))
	{
	for (v = 1; str[u + v] != ' ' && str[u + v]; v++)
	;
	v++;
	b[z] = (char *) malloc(v * sizeof(char));
	v--;
	if (b[z] == NULL)
	{
	for (w = 0; w < z; w++)
	free(b[w]);
	free(b[y - 1]);
	free(b);
	return (NULL);
	}
	for (x = 0; x < v; x++)
	b[z][x] = str[u + x];
	b[z][x] = '\0';
	z++;
	u += v;
	}
	else
	u++;
	}
	return (b);
}

