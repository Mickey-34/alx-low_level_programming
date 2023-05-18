#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: Number of bytes to concatenate from n2
 * Return: Pointer to allocated space memory otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mk;
	unsigned int m, k, l, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	mk = malloc(l + n + 1);
	if (mk == NULL)
	{
	return (NULL);
	}
	for (m = 0; s1[m] != '\0'; m++)
	mk[m] = s1[m];
	for (k = 0; k < n; k++)
	{
	mk[m] = s2[k];
	m++;
	}
	mk[m] = '\0';
	return (mk);
}
