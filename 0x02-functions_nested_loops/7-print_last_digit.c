#include "7-print_last_digit.h"
#include "_putchar.h"

/**
 * print_last_digit - prints the last digit of a no.
 * @i: number/int to be checked.
 * Return: always last_d(int)
 */

int print_last_digit(int i)
{
	int last_d;

	last_d = i % 10;
	if (last_d < 0)
	{
		last_d = -last_d;
	}
	_putchar('0' + last_d);
	return (last_d);
}
