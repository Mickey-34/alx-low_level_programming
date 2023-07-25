#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: Char string type
 * @src: Char string type
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b = -1;

	for (b = 0; src[b] != '\0'; b++)
	{
	dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);
}
