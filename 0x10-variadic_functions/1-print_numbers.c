#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: number of integers passed to function
 * @separator: string to be printed between numbers
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mimi;
	unsigned int kola;

	va_start(mimi, n);

	for (kola = 0; kola < n; kola++)
	{
	printf("%d", va_arg(mimi, int));

	if (kola != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(mimi);
}
