#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Must be 0
 */
int main(void)
{
	char mimi[84];
	int tony = 0, fib = 0, d1, d2;

	srand(time(0));

	while (fib < 2772)
	{
	mimi[tony] = 33 + rand() % 94;
	fib += mimi[tony++];
	}
	mimi[tony] = '\0';

	if (fib != 2772)
	{
	d1 = (fib - 2772) / 2;
	d2 = (fib - 2772) / 2;

	if ((fib - 2772) % 2 != 0)
	d1++;

	for (tony = 0; mimi[tony]; tony++)
	{

	if (mimi[tony] >= (33 + d1))
	{
	mimi[tony] -= d2;
	break;
	}
	}
	}
	printf("%s", mimi);
	return (0);
}
