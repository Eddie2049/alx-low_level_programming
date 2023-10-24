#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: param
 * @c: param
 *
 * Return: char * pointer
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		if (c == *s)
			return (s + i);

		++s;
		++i;
	}
	return (0);
}
