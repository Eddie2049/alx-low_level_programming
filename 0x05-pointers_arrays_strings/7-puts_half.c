#include "main.h"

/**
 * puts_half - prints half of string
 * @str: param
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i, j, len, len_b;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		len_b = len / 2;
	else
		len_b = (len / 2) + 1;

	for (j = len_b; j < len; ++j)
		_putchar(str[j]);

	_putchar('\n');
}
