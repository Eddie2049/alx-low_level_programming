#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: copied to
 * @src: copied from
 *
 * Return: char* pointer
*/

char *_strcat(char *dest, char *src)
{
	int i, j, d_len;

	d_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		d_len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[d_len + j] = src[j];
	}

	dest[d_len + j] = '\0';
	return (dest);
}
