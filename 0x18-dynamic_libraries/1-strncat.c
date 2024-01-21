#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: copied to
 * @src: copied from
 * @n: param
 *
 * Return: char* pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, d_len;

	d_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		d_len++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[d_len + j] = src[j];
	}

	dest[d_len + j] = '\0';
	return (dest);
}
