#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: First string pointer
 * @src: Second string pointer
 * @n: The number of bytes to concatenate
 *
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int mimi, g;

	mimi = 0;
	while (dest[mimi] != '\0')
	{
	mimi++;
	}
	for (g = 0; g < n && src[g] != '\0'; g++, mimi++)
	{
	dest[mimi] = src[g];
	}
	dest[mimi] = '\0';
	return (dest);
}
