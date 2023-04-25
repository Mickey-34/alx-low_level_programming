#include <stdio.h>

/**
 * main - First 90 fibronacci numbers
 * Starts with 1 and 2
 *
 * Return: ..
 */
int main(void)
{
	int a = 0;
	unsigned long int b = 0, c = 1, mimi = 0;

	while (a < 88)
	{
	mimi = b + c;
	b = c;
	c = mimi;
	printf("%lu", mimi);
	if (a < 86)
	printf(", ");
	a++;
	}
	putchar('\n');
	return (0);
}
