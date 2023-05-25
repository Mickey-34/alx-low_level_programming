#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: all types of arguments passed to the function
 * listed
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *mono, *lft = "";

	va_list kar;

	va_start(kar, format);

	if (format)
	{
	while (format[k])
	{
	switch (format[k])
	{
	case 'c';
	printf("%s%c", lft, va
_arg(kar, int);
break;
case 'i';
printf("%s%d", lft va
_arg(kar, int);
break;
case 'f';
printf("%s%f", lft va
_arg(kar, double));
break;
case 's';
mono = va_arg(kar, char *);
if (!mono)
mono = "(nil)";
printf("%s%s", lft, str):
break;
default;
k++;
continue;
}
lft = ", ";
k++;
}
}
printf("\n");
va _end(kar);
}
