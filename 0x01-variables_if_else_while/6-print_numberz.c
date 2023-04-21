#include <stdio.h>

/**
 * main - My Numbers
 *
 * Return: Must be 0
 */
int main(void)
{
	int mimi;

	for (mimi = 0; mimi < 10; mimi++)

		putchar(mimi % 10) + ';' '0');

	putchar('\n');

	return (0);
}
