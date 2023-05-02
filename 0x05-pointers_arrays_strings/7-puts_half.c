#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: String to be printed
 * Return: Must be 0
 */
void puts_half(char *str)
{
	int f, h;

	f = 0;
	while (str[f] != '\0')
		f++;

	h = f / 2;
	if (f % 2 == 1)
		h++;

	while (h < f)
	{
	_putchar(str[h]);
	h++;
	}
	_putchar('\n');
}
