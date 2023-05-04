#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13
 * @w: Pointer to string
 * Return: *w
 */
char *rot13(char *w)
{
	int a;
	int b;
	char mimi[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (a = 0; w[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (w[a] == mimi[b])
	{
	w[a] = dot[b];
	break;
	}
	}
	}
	return (w);
}
