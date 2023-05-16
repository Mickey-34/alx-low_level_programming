#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: String
 *  Return: Must be 0
 */
char *_strdup(char *str)
{
	int a = 0, mimi = 0;
	char *l;

	if (str == NULL)
	return (NULL);

	for (; str[mimi] != '\0'; mimi++)
	;

	l = malloc(mimi * sizeof(*str) + 1);

	if (l == 0)
	return (NULL);

	else
	{
	for (; a < mimi; a++)
	l[a] = str[a];
	}
	return (l);
}
