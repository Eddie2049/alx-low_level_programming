#include "main.h"

/**
 * rev_string - reverses string
 * @a: param
 *
 * Return: void
*/

void rev_string(char *a)
{
	int i, j, len;

	len = 0;

	for (i = 0; a[i] != 0; i++)
		len++;

	for (j = 0; j < len / 2; ++j)
	{
		char s;

		s = a[j];
		a[j] = a[len - 1 - j];
		a[len - 1 - j] = s;
	}
}
