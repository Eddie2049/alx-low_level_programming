#include "1-alphabet.h"
#include "_putchar.h"
#include "2-print_alphabet_x10.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: always void
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
