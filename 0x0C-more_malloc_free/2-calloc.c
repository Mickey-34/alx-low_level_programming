#include "main.h"

/**
 * *_memset - to fill memory with constant byte
 * @c: pointer to match constant
 * @f: constant
 * @n: Maximum bytes to be used
 * Return: s
 */
char *_memset(char *c, char f, unsigned int n)
{
	char *zebra = c;

	while (n--)
	*c++ = f;
	return (zebra);
}
/**
 * *_calloc -  a function that allocates memory for an array.
 * @nmemb: Array length
 * @size: Size of each element
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;

	if (size == 0 || nmemb == 0)
	return (NULL);
	v = malloc(sizeof(int) * nmemb);

	if (v == 0)
	return (NULL);

	_memset(v, 0, sizeof(int) * nmemb);
	return (v);
}
