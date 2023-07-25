#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: String to be printed
 * Return: Length of string
 */
void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
	_putchar(str[y]);
	y++;
	}
	_putchar('\n');
}
