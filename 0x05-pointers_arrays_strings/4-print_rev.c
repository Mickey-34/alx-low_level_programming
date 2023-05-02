#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: String to be printed
 * Return: Must be 0
 */
void print_rev(char *s)
{
	int mimi = 0;

	while (s[mimi])
		mimi++;
	while (mimi--)
	_putchar(s[mimi]);
	_putchar('\n');
}
