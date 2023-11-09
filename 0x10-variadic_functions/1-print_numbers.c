#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - entry. Prints numbers, followed by a new line.
 * @separator: param 1. string to be printed between numbers.
 * @n: param 2. number of integers passed .
 * @...: variadic.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no_s;
	unsigned int i;

	va_start(no_s, n);


	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(no_s, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(no_s);
}
