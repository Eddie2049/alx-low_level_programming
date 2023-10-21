#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: param
 * Return: char * pointer
*/

char *rot13(char *s)
{
	char *p;
	int base;

	p = s;
	for (; *s; s++)
	{
		for (base = (*s >= 'a') ? 'a' : 'A';
			*s >= base && *s < base + 26; (*s)++)
		{
			*s = ((*s - base + 13) % 26) + base;
		}
	}
	return (p);
}
