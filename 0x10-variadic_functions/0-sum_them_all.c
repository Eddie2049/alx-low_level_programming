#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - entry.Returns the sum
 * @n: number of paramters passed to the function.
 * @...: variadic
 *
 * Return: int value.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(p, n);

	for (i = 0; i < n; ++i)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
