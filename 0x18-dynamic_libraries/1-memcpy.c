#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @n: Copies of functions
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: Pointer to @ dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
	dest[a] = src[a];
	a++;
	}
	return (dest);
}
