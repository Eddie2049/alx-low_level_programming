#include "5-sign.h"
#include "_putchar.h"

/**
 * print_sign - prints sign of an int
 *
 * @n: int to check
 * Return: Always 0 | 1 | -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
