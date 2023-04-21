#include <stdio.h>

/**
 * main - Persistency
 *
 * Return: Must be 0
 */
int main(void)
{
	int mimi;

	for (mimi = 48; mimi < 58; mimi++)
	{
		putchar(mimi);
		if (mimi != 57)
	{
		putchar(',');
		putchar(' ');
	}
	
	}
		putchar('\n');
		return (0);
}
