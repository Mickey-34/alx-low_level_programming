#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: First string pointer
 * @src: Second string pointer
 * @n: number of bytes to use
 * Return:  pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int mimi;

	for (mimi = 0; mimi < n && src[mimi] != '\0'; mimi++)
	dest[mimi] = src[mimi];

	for (; mimi < n; mimi++)
	dest[mimi] = '\0';
	return (dest);
}
