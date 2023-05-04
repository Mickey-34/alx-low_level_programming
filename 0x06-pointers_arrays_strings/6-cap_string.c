#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @k: Pointer to string
 * Return: Pointer to k
 */
char *cap_string(char *k)
{
	int diamond;

	diamond = 0;
	while (k[diamond] != '\0')
	{
	if (k[0] >= 97 && k[0] <= 122)
	{
	k[0] = k[0] - 32;
	}
	if (k[diamond] == ' ' || k[diamond] == '\t' || k[diamond] == '\n'
	    || k[diamond] == ',' || k[diamond] == ';' || k[diamond] == ','
	    || k[diamond] == ',' || k[diamond] == '!' || k[diamond] == '?'
	    || k[diamond] == '"' || k[diamond] == '(' || k[diamond] == ')'
	    || k[diamond] == '{' || k[diamond] == '}')
	{
	if (k[diamond + 1] >= 97 && k[diamond + 1] <= 122)
	{
	k[diamond + 1] = k[diamond + 1] - 32;
	}
	}
	diamond++;
	}
	return (k);
}
