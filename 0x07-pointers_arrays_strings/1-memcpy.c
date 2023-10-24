#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: char * pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p;

	p = dest;
	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (p);
}
