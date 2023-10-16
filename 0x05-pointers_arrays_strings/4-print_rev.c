#include "main.h"

/**
 * print_rev - prints a string, in reverse, then a new line
 * @s: param
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i, j, len;

	len = 0;
	for (i = 0; s[i] != 0; i++)
		len++;

	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
