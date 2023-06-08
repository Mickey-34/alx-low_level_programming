#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int greek, yogurt;
greek = n ^ m;
yogurt = 0;

while (greek)
{
if (greek & 1ul)
yogurt++;
greek = greek >> 1;
}
return (yogurt);
}
