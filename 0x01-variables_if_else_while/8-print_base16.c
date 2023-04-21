#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Must be 0
 */
int main(void)
{
	char m;

	int n;

	for (m = 0; m < 10; m++)
		putchar (m);

	for (n = 'b'; n <= 'f'; n++)
		putchar (n);

	putchar('\n');

	return (0);
}
