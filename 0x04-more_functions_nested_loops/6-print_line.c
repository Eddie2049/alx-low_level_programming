#include "main.h"

/**
 * print_line - prints a straight line on the term.
 * @n: length of line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
