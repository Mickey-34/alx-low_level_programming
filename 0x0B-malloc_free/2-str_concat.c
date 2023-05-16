#include "main.h"
#include <string.h>

/**
 * _strlen - Finding length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int kaz = 0;

	for (; s[kaz] != '\0'; kaz++)
	;
	return (kaz);
}

/**
 * *str_concat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int kaz1, kaz2, q;
	char *v;

	if (s1 == NULL)
	s1 = "\0";
	if (s2 == NULL)
	s2 = "\0";

	kaz1 = _strlen(s1);
	kaz2 = _strlen(s2);
	v = malloc((kaz1 + kaz2) * sizeof(char) + 1);
	if (v == 0)
	return (0);

	for (q = 0; q <= kaz1 + kaz2; q++)
	{
	if (q < kaz1)
	v[q] = s1[q];
	else
	v[q] = s2[q - kaz1];
	}
	v[q] = '\0';
	return (v);
}
