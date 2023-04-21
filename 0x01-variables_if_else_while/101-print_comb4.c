#include <stdio.h>

/**
 * main - Hard Things
 *
 * Return: Must be 0
 */
int main(void)
{
	int m, n, o;

	for (m =55; m < 68; m++)
	{
		for (n =53; n < 68; n++)
	{ 
		for (o = 51; o < 68; o++)
	{
		if (o > n && n > m)
	{
		putchar(m);
		putchar(n);
		putchar(o);

		if (m != 65 || n != 67)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	}
	   putchar('\n');
	   return (0);
}
