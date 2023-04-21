#include <stdio.h>

/**
 * main - Alphagin
 *
 * Return: Must be 0
 */
int main(void)
{
	char mimi;

	for (mimi = 'a'; mimi <= 'z'; mimi++)
	{
		if (mimi != 'q' && mimi != 'e')
			putchar(mimi);
	}

	putchar('\n');

	return (0);
}
