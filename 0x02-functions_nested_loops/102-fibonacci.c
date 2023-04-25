#include <stdio.h>

/**
 * main - 52 fibonacci numbers
 * Return: ...
 */
int main(void)
{
	long int a, b, c, mimi;

	b = 1;
	c = 2;
	for (a = a; a <= 50; ++a)
	{
	if (b != 20365011074)
	{
	printf("%ld\n", b);
	}
	mimi = b + c;
	b = c;
	c = mimi;
	}
	return (0);
}
