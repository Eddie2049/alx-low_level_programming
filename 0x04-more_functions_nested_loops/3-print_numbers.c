#include "main.h"

/**
 * print_numbers - prints the numbers,0 to 9, then a new line.
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
