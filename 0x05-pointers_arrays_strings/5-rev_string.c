#include "main.h"

/**
 * rev_string - Reverse of a string
 * @s: String to be reversed
 * Return: Must be 0
 */
void rev_string(char *s)
{
	int mimi, box, palm;
	char zoo;

	for (mimi = 0; s[mimi] != '\0'; mimi++)
	;
	box = 0;
	palm = mimi / 2;

	while (palm--)
	{
	zoo = s[mimi - box - 1];
	s[mimi - box - 1] = s[box];
	s[box] = zoo;
	box++;
	}
}
