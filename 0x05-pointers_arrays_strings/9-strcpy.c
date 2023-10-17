#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copied to
 * @src: copied from
 *
 * Return: char pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	while (src[i] != 0)
	{
		i++;
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
