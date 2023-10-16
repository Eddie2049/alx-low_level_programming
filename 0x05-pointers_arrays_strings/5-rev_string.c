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
	char s[999];

	len = 0;

	for (i = 0; a[i] != 0; i++)
		len++;

	for (j = 0; j < len; ++j)
	{
		*(s + len - 1 - j) = a[j];
		a[j] = s[j];
	}
}
