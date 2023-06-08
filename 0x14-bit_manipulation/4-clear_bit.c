#include "main.h"

/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index
 * @index: bit to clear
 * @n: number to index
 * Return: -1 on error
 * 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);

if (*n & 1L << index)
*n ^= 1L << index;
return (1);
}
