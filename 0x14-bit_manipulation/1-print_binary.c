#include "main.h"

/**
 * print_binary -  a function that prints the
 * binary representation of a number.
 * @n: Number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
int mimi, fano;
mimi = sizeof(n) * 8;
fano = 0;

while (mimi)
{
if (n & 1L << --mimi)
{
_putchar('1');
fano++;
}
else if (fano)
_putchar('0');
}
if (!fano)
_putchar('0');
}
