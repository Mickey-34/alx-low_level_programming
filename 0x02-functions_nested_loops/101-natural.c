#include <stdio.h>

/**
 * main - Print sum of multiples
 *
 * Return: Must be 0
 */
int main(void)
{
	int c, d = 0;

	while (c < 1024)
	{
	if ((c % 3 == 0) || (c % 5 == 0))
	{
	d += c;
	}
	c++;
	}
	printf("%d\n", d);
	return (0);
}
