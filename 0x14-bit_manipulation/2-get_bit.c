#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index
 * @index: bit to get
 * @n: number to index
 * Return: -1 on error or bit state
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}
