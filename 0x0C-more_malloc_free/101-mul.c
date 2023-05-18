#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @ctz: Pointer to string to print
 * Return: void
 */
void _puts(char *ctz)
{
	int y = 0;

	while (ctz[y])
	{
	_putchar(ctz[y]);
	y++;
	}
}
/**
 * _atoi - convert string to an integer
 * @s: Char of a string type
 * Return: Integer to be converted
 */
int _atoi(const char *s)
{
	int k = 1;
	unsigned long int vert = 0, vote, q;

	for (vote = 0; !(s[vote] >= 48 && s[vote] <= 57); vote++)
	{
	if (s[vote] == '-')
	{
	k *= -1;
	}
	}

	for (q = vote; s[q] >= 48 && s[q] <= 57; q++)
	{
	vert *= 10;
	vert += (s[q] - 48);
	}
	return (k * vert);
}
/**
 * print_int - prints an integer
 * @g: int
 * Return: Must be 0
 */
void print_int(unsigned long int g)
{
	unsigned long int f = g, b, c;

	for (b = 0; g / f > 9; b++, f *= 10)
	;

	for (; f >= 1; g %= f, f /= 10)
	{
	c = g / f;
	_putchar('0' + c);
	}
}
/**
 * main - Print result of multiplication, follwed by new line
 * @argc: int
 * @argv: list
 * Return: Must be 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
	_puts("Error");
	exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}

