#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: param
 * @b: param
 * @n: param
 *
 * Return: char * pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	unsigned int i;

	p = s;
	for (i = 0; i < n; ++i)
		s[i] = b;

	return (p);
}
