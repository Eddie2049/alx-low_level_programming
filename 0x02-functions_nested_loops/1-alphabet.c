#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints alphabet
 *
 * Return: always void
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
