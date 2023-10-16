#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other char of a str.
 * @str: param
 *
 * Return: void
*/

void puts2(char *str)
{
	int i, j, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (j = 0; j < len; ++j)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
