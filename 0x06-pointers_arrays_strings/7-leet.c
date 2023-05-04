#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @q: Pointer to string
 * Return: Pointer to string
 */
char *leet(char *q)
{
	int mimi, diamond;
	char ama[] = "aAeEoOtTlL";
       	char kofi[] = "4433007711";
 
	mimi = 0;
	while (q[mimi] != '\0')
	{
	diamond = 0;
        while (diamond < 10)
	{
	if (ama[diamond] == q[mimi])
	{
	q[mimi] = kofi[diamond];
	}
	diamond++;
	}
	return (q);
}
