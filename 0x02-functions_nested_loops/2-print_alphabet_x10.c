#include "main.h"

/**
 * print_alphabets - Lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char mimi;
	int j = 0;

	while (j < 10)
	{
	for (mimi = 'a'; mimi <= 'z'; mimi++)
	{
	_putchar(mimi);
	}
	_putchar('\n');
	j++;
	}
}
