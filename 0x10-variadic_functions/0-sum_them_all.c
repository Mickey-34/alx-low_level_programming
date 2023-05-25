#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: The number of parameters to be passed
 * into function.
 * @...: The variable number of parameters to calculate
 * the sum of
 *
 * Return: If n == 0 - 0
 * Otherwise - Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list qs;
	unsigned int a, sum = 0;

	va_start(qs, n);

	for (a = 0; a < n; a++)
	sum += va_arg(qs, int);

	va_end(qs);
	return (sum);
}
