#include "main.h"

/**
 * *_memset -  a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: number of bytes
 * Return: Pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
