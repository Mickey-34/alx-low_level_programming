#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Must be 0
 */
int main(void)
{
	char mimi;

	for (mimi = 'z'; mimi >= 'a'; mimi--)

		putchar(mimi);

	putchar('\n');

	return (0);
}
