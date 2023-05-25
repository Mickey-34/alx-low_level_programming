#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: String to be printed between strings
 * @n: The number of strings passed to the function
 * @...: Variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * Nil is printed instead if one string is NULL.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stone;
	char *klm;
	unsigned int lola;

	va_start(stone, n);
	for (lola = 0; lola < n; lola++)
	{
	klm = va_arg(stone, char *);
	if (klm == NULL)
	printf("(nil)");
	else
	printf("%s", klm);
	if (lola != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(stone);
}
