#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry. Prints strings, followed by a new line.
 * @separator: printed between strings.
 * @n: number of strings passed to the function.
 * @...: variadic.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s_;
	char *s;
	unsigned int i;


	va_start(s_, n);


	for (i = 0; i < n; ++i)
	{
		s = va_arg(s_, char *);


		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);


		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s_);
}
