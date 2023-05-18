#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block
 * @ptr: Pointer to memory allocated with malloc(old_size)
 * @old_size: Size in bytes, of allocated ptr space
 * @new_size: Size in bytes of the new memory block
 * Return: NULL if new_size = 0
 * and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *o;
	unsigned int k;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	o = malloc(new_size);
	if (o == NULL)
	return (NULL);
	return (o);
	}
	if (new_size > old_size)
	{
	o = malloc(new_size);
	if (o == NULL)
	return (NULL);
	for (k = 0; k < old_size && k < new_size; k++)
	*((char *)o + k) = *((char *)ptr + k);
	free(ptr);
	}
	return (o);
}
