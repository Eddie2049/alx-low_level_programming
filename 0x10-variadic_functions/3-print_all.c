#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - entry. function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	char *s;
	char *sp;
	va_list list;

	i = 0;
	sp = "";
	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
