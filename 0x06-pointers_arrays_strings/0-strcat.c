#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: first string character
 * @src: second string character
 *
 * Return: pOinter to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int mimi, g;

	mimi = 0;
	while (dest[mimi] != '\0')
	{
	mimi++;
	}
	for (g = 0; src[g] != '\0'; g++, mimi++)
	{
	dest[mimi] = src[g];
	}
	dest[mimi] = '\0';
	return (dest);
}
